#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CaseFixe.h"
#include "Case.h"

//Constructeur
CaseFixe::CaseFixe(int ID, string nom) : Case(ID, nom) {
    this->nom = nom;
    this->ID = ID;
}

//Destructeurs
CaseFixe::~CaseFixe() {
    //nothing to do
}

void CaseFixe::action(Joueur* j, Plateau* plateau, int d){

}

void CaseFixe::affichage(){
    cout<< "[" << this->ID << "] - " << this->nom << endl;
}