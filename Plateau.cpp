#include "Plateau.h"
#include "Gare.h"
#include "EmplacementConstructible.h"
#include <iostream>

using namespace std;

Plateau::Plateau() {

}

void Plateau::initPlateau() {
    cout << "Combien de joueurs vont jouer ? (Minimum 2)" << endl;
    int nbJoueurs;
    string nomJoueur;
    joueur j;
    cin >> nbJoueurs;
    cout << "Rentrez le nom des joueurs un par un : " << endl;
    for (int i = 1; i <= nbJoueurs ; i++) {
        cin >> nomJoueur;
        j = joueur(nomJoueur, i);
        this->joueursActifs.push_back(j);
    }

    // Ajout des gares
    this->plateau[5] = Gare(5, "Gare Montparnasse");
    this->plateau[15] = Gare(15, "Gare de Lyon");
    this->plateau[25] = Gare(25, "Gare du Nord");
    this->plateau[35] = Gare(35, "Gare Saint-Lazare");

    // Ajout des cases fixes
    this->plateau[0] = CaseDepart(0);
    this->plateau[10] = CasePrison(10);
    this->plateau[20] = CaseChance(20);
    this->plateau[30] = CaseAllerPrison(30);

    // Ajout des cases Chance
    this->plateau[2] = CaseChance(2);
    this->plateau[4] = CaseChance(4);
    this->plateau[7] = CaseChance(7);
    this->plateau[12] = CaseChance(12);
    this->plateau[17] = CaseChance(17);
    this->plateau[22] = CaseChance(22);
    this->plateau[28] = CaseChance(28);
    this->plateau[33] = CaseChance(33);
    this->plateau[36] = CaseChance(36);
    this->plateau[38] = CaseChance(38);

    // Ajout des rues
    this->plateau[2] = Empl(2);

}

Case Plateau::avance(Case c, int n) {
    return this->plateau[c.getId() + n];
}

void Plateau::affichage() {
    for (Case c : this->plateau) {
        c.affichage();
    }
}

int Plateau::nbGare(Joueur j) {
    return j.nbGare();
}

void Plateau::jeu() {
    while(!this->isGameOver()) {
        for (Joueur j : this->joueursActif) {
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

boolean isGameOver() {
    if (this->joueursActifs.size() <= 1) {
        return true;
    } else {
        return false;
    }
}