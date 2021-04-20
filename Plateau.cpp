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

    for (int i = 0; i < 39; i++ ) {
        this->plateau[i] = nullptr;
    }

    // Ajout des gares
    this->plateau[5] = new Gare(5, "Gare Montparnasse");
    this->plateau[15] = new Gare(15, "Gare de Lyon");
    this->plateau[25] =  new Gare(25, "Gare du Nord");
    this->plateau[35] = new Gare(35, "Gare Saint-Lazare");

    // Ajout des cases fixes
    this->plateau[0] = new CfDepart(0, "Départ");
    this->plateau[10] = new CfPrison(10, "Prison");
    this->plateau[20] = new CfChance(20, "Case chance");
    //this->plateau[30] = CaseAllerPrison(30, "Aller en prison");

    // Ajout des cases Chance
    this->plateau[2] = new CfChance(2, "Case chance");
    this->plateau[4] = new CfChance(4, "Case chance");
    this->plateau[7] = new CfChance(7, "Case chance");
    this->plateau[12] = new CfChance(12, "Case chance");
    this->plateau[17] = new CfChance(17, "Case chance");
    this->plateau[22] = new CfChance(22, "Case chance");
    this->plateau[28] = new CfChance(28, "Case chance");
    this->plateau[33] = new CfChance(33, "Case chance");
    this->plateau[36] = new CfChance(36, "Case chance");
    this->plateau[38] = new CfChance(38, "Case chance");

    // Ajout des rues   
    // this->plateau[1] = EmplacementConstructible(1);

    // cout << "Combien de joueurs vont jouer ? (Minimum 2)" << endl;
    // int nbJoueurs;
    // string nomJoueur;
    // cin >> nbJoueurs;
    // cout << "Rentrez le nom des joueurs un par un : " << endl;
    // for (int i = 1; i <= nbJoueurs ; i++) {
    //     cin >> nomJoueur;
    //     this->joueursActifs.push_back(Joueur(nomJoueur, i, this->plateau[0], this));
    // }
}

Case* Plateau::avance(Case* c, int n) {
//     return this->plateau[c.getId() + n];
// }

// void Plateau::affichage() {
//     for (Case c : this->plateau) {
//         c.affichage();
//     }
// }

// int Plateau::nbGare(Joueur j) {
//     return j.nbGare();
}

void Plateau::jeu() {
    for (int i = 0; i < 39; i++ ) {
        if (this->plateau[i] != nullptr) {
            this->plateau[i]->affichage();
        }
    }
    // while(!this->isGameOver()) {
    //     for (Joueur& j : this->joueursActif) {
    //         j.tourDeJeu();
    //         this->affichage();
    //     }
    // }
}

void Plateau::removeJoueur(Joueur* j) {
    // vector<Joueur>::iterator it;
    // it = find(this->joueursActifs.begin(), this->joueursActifs.end(), j);
    // if(it != this->joueursActifs.end()) {
    //     this->joueursActifs.erase(it);
    //     this->joueursInactifs.push_back(j);
    // } 
}



// bool isGameOver() {
//     if (this->joueursActifs.size() <= 1) {
//         return true;
//     } else {
//         return false;
//     }
// }