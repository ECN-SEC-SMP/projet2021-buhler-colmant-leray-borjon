#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CaseAchetable.h"
#include "EmplacementConstructible.h"

//constructeur
EmplacementConstructible::EmplacementConstructible(int ID, string nom): CaseAchetable(ID, nom) {
    this->ID = ID;
    this->nom = nom;
}

int loyer(Case c){
  
}