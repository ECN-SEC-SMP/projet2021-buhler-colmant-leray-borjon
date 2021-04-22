#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CfChance.h"

//constructeur
CfChance::CfChance(){

  }
}

void CfChance::action(Joueur joueur, Plateau plateau, int d){
  cout << "Le joueur " + joueur->nom + " est vraiment très chanceux !" << endl;
} 