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

void CfAllerPrison::action(Joueur joueur, Plateau plateau, int d){
  joueur->setPosition(plateau->getCase(30)); //Place le joueur sur la case prison
  joueur->setnbJPrison(2); //Place le joueur en prison pour 2 jours
}