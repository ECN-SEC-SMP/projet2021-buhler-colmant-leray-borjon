#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Case.h"
#include "CaseFixe.h"

//constructeur
<<<<<<< HEAD
CaseFixe::CaseFixe(){

  }

void CaseFixe::affichage(){
    cout<< this->nom << endl;
  }
=======
CaseFixe::CaseFixe(int ID, string nom) : Case(ID, nom) {
    this->nom = nom;
    this->ID = ID;
}
>>>>>>> Plateau
