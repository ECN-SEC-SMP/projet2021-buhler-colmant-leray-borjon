#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CfChance.h"

//constructeur
CfChance::CfChance(int ID, string nom): CaseFixe(ID, nom) {
  this->nom = nom;
  this->ID = ID;
}

void CfChance::action(Joueur joueur, Plateau plateau, int d){
  cout << "Le joueur " + joueur->nom + " est vraiment très chanceux !" << endl;
} 
