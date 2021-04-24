#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Case.h"
#include "CaseFixe.h"
#include "CfPrison.h"

//Constructeur
CfPrison::CfPrison(int ID, string nom): CaseFixe(ID, nom) {
  this->nom = nom;
  this->ID = ID;
}

//Destructeurs
CfPrison::~CfPrison() {
    //nothing to do
}

void CfPrison::affichage(){
    cout<< "[" << this->ID << "] - " << this->nom << endl;
}

