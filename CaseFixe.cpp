#include <iostream>
#include <stdlib.h>
using namespace std;

#include "CaseFixe.h"

//constructeur
CaseFixe::CaseFixe(int ID, string nom) : Case(ID, nom) {
    this->nom = nom;
    this->ID = ID;
}

<<<<<<< HEAD
}

void CaseFixe::action(Joueur &j, Plateau &plateau, int d){

}
=======
void CaseFixe::affichage(){
    cout<< "[" << this->ID << "] - " << this->nom << endl;
}
>>>>>>> origin/case
