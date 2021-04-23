#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Case.h"
#include "Joueur.h"

string Case::getNom() const {
    return nom;
}

//constructeur
Case::Case(int ID, string nom){
    this->ID = ID;
    this->nom = nom;
  }

void Case::action(Joueur* joueur, Plateau* plateau, int d) {
  //cout << "ok" << endl;
}

int Case::getID() {
  return this->ID;
}

void Case::insererBatListe(int montant){}
int Case::loyer(){}
