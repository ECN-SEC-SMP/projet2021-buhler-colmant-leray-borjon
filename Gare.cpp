#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Gare.h"

Gare::Gare(int ID, string nom) : CaseAchetable(ID, nom) {
    this->ID =ID;
    this->nom = nom;
}

void Gare::action(Joueur* joueur, Plateau* plat, int de) {
    
}
