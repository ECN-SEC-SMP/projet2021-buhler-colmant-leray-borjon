#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Case.h"
#include "Joueur.h"

//Constructeur
Case::Case(int ID, string nom){
    this->ID = ID;
    this->nom = nom;
}

Case::~Case() {
    //nothing to do
}

//Getter/Setter
int Case::getID() {
  return this->ID;
}

string Case::getNom() const {
    return nom;
}

void Case::insererBatListe(int montant){}
int Case::loyer(){}
