#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CfPrison.h"

//constructeur
CfPrison::CfPrison(){

  }

void CfPrison::action(Joueur joueur, Plateau plateau, int d){
  cout << "Le joueur " + joueur->nom + " est en prison pour encore " + joueur->nbJPrison + " !" << endl;
} 