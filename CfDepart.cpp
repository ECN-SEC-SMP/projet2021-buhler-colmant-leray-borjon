#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CfDepart.h"

//constructeur
<<<<<<< HEAD
CfDepart::CfDepart(int ID, string nom){
    //this->ID;
    //this->nom;
  }
}

void CfDepart::action(Joueur joueur, Plateau plateau, int d){
  joueur->setFortune(joueur->getFortune() + 2000); //Place le joueur en prison
=======
CfDepart::CfDepart(int ID, string nom) : CaseFixe(ID, nom) {
    this->ID;
    this->nom;
>>>>>>> origin/case
}