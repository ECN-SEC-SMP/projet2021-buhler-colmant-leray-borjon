#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Case.h"

//constructeur
Case::Case(int ID, string nom){
    this->ID=ID;
    this->nom=nom;
}

int Case::getID() {
  return this->ID;
}



void Case::insererBatListe(int montant){}
int Case::loyer(){}
void Case::setProprio(Joueur *j){}