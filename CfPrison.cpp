#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CfPrison.h"

//constructeur
CfPrison::CfPrison(int ID, string nom): CaseFixe(ID, nom) {
  this->nom = nom;
  this->ID = ID;
}

void CfPrison::action(Joueur joueur, Plateau plateau, int d){
  cout << "Le joueur " + joueur->nom + " est en prison pour encore " + joueur->nbJPrison + " !" << endl;
} 