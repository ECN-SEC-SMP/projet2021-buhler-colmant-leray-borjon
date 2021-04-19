#include "Plateau.h"
#include "Gare.h"
#include "CfDepart.h"
#include "CfPrison.h"
#include "CfChance.h"
#include "EmplacementConstructible.h"
#include <iostream>

using namespace std;

Plateau::Plateau() {

}

void Plateau::initPlateau() {

    // Ajout des gares
    this->plateau[5] = Gare(5, "Gare Montparnasse");
    this->plateau[15] = Gare(15, "Gare de Lyon");
    this->plateau[25] = Gare(25, "Gare du Nord");
    this->plateau[35] = Gare(35, "Gare Saint-Lazare");

    // Ajout des cases fixes
    this->plateau[0] = CfDepart(0, "Départ");
    this->plateau[10] = CfPrison(10, "Prison");
    this->plateau[20] = CfChance(20, "Case chance");
    //this->plateau[30] = CaseAllerPrison(30, "Aller en prison");

    // Ajout des cases Chance
    // this->plateau[2] = CaseChance(2);
    // this->plateau[4] = CaseChance(4);
    // this->plateau[7] = CaseChance(7);
    // this->plateau[12] = CaseChance(12);
    // this->plateau[17] = CaseChance(17);
    // this->plateau[22] = CaseChance(22);
    // this->plateau[28] = CaseChance(28);
    // this->plateau[33] = CaseChance(33);
    // this->plateau[36] = CaseChance(36);
    // this->plateau[38] = CaseChance(38);

    // Ajout des rues   
    // this->plateau[1] = EmplacementConstructible(1);

    cout << "Combien de joueurs vont jouer ? (Minimum 2)" << endl;
    int nbJoueurs;
    string nomJoueur;
    cin >> nbJoueurs;
    cout << "Rentrez le nom des joueurs un par un : " << endl;
    for (int i = 1; i <= nbJoueurs ; i++) {
        cin >> nomJoueur;
        this->joueursActifs.push_back(Joueur(nomJoueur, i, this->plateau[0], *this));
    }
}

// Case Plateau::avance(Case c, int n) {
//     return this->plateau[c.getId() + n];
// }

// void Plateau::affichage() {
//     for (Case c : this->plateau) {
//         c.affichage();
//     }
// }

// int Plateau::nbGare(Joueur j) {
//     return j.nbGare();
// }

void Plateau::jeu() {
    while(!this->isGameOver()) {
        for (Joueur& j : this->joueursActif) {
            j.tourDeJeu();
            this->affichage();
        }
    }
}

void Plateau::removeJoueur(Joueur j) {
    vector<Joueur>::iterator it;
    it = find(this->joueursActifs.begin(), this->joueursActifs.end(), j);
    if(it != this->joueursActifs.end()) {
        this->joueursActifs.erase(it);
        this->joueursInactifs.push_back(j);
    } 
}

// bool isGameOver() {
//     if (this->joueursActifs.size() <= 1) {
//         return true;
//     } else {
//         return false;
//     }
// }