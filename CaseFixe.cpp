#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Case.h"
#include "CaseFixe.h"

//constructeur
CaseFixe::CaseFixe(int ID, string nom) : Case(ID, nom) {
    this->nom = nom;
    this->ID = ID;
}