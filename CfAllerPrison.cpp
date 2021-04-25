#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CaseFixe.h"
#include "CfAllerPrison.h"

//Constructeur
CfAllerPrison::CfAllerPrison(int ID, string nom) : CaseFixe(ID, nom) {
    this->ID = ID;
    this->nom = nom;
}

//Destructeurs
CfAllerPrison::~CfAllerPrison() {
    //nothing to do
}

void CfAllerPrison::action(Joueur* joueur, Plateau* plateau, int d){
    joueur->setPosition(plateau->getCase(10)); //Place le joueur sur la case prison
    joueur->setnbJPrison(2); //Place le joueur en prison pour 2 jours
    cout << endl;
    cout << "[ACTION] Pas de chance pour le joueur français " + joueur->getNom() + " qui file droit en prison ! Tchatchaooo" << endl;
}