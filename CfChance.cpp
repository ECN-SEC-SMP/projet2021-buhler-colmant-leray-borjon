#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CfChance.h"

//constructeur
<<<<<<< HEAD
CfChance::CfChance(){

  }
}

void CfChance::action(Joueur joueur, Plateau plateau, int d){
  cout << "Le joueur " + joueur->nom + " est vraiment très chanceux !" << endl;
} 
=======
CfChance::CfChance(int ID, string nom): CaseFixe(ID, nom) {
  this->nom = nom;
  this->ID = ID;
}
>>>>>>> origin/case
