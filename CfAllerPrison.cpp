#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CaseFixe.h"
#include "CfAllerPrison.h"

//constructeur
CfAllerPrison::CfAllerPrison(int ID, string nom) : CaseFixe(ID, nom) {
    this->ID = ID;
    this->nom = nom;
}

void CfAllerPrison::action(Joueur joueur, int de){
  
}