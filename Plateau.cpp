#include "Plateau.h"
#include <iostream>


Plateau::Plateau() {

}

Plateau::initPlateau() {
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
}