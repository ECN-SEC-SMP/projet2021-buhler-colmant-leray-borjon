#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Case.h"
#include "CaseFixe.h"
#include "CfChance.h"

//Constructeur
CfChance::CfChance(int ID, string nom): CaseFixe(ID, nom) {
  this->nom = nom;
  this->ID = ID;
}

//Destructeurs
CfChance::~CfChance() {
    //nothing to do
}

void CfChance::action(Joueur* joueur, Plateau* plateau, int d){
  joueur->setFortune(joueur->getFortune() + 500); //Le joueur gagne 1000 coin en passant sur la case chance
  cout << endl;
  cout << "[ACTION] Le joueur " + joueur->getNom() + " est vraiment très chanceux aujourd'hui ! +500 coins !" << endl;
} 
