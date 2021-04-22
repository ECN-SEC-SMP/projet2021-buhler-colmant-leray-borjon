#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CfAllerPrison.h"

//constructeur
CfAllerPrison::CfAllerPrison(){
    
}

void CfAllerPrison::action(Joueur joueur, Plateau plateau, int d){
  joueur->setPosition(plateau->getCase(30)); //Place le joueur sur la case prison
  joueur->setnbJPrison(2); //Place le joueur en prison pour 2 jours
}


