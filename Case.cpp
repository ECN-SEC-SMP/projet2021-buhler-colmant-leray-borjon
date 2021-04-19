#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Case.h"

string Case::getNom() const {
    return nom;
}

//constructeur
Case::Case(int ID, string nom){
    this->ID=ID;
    this->nom=nom;
}