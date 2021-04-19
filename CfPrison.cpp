#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Case.h"
#include "CaseFixe.h"
#include "CfPrison.h"

//constructeur
CfPrison::CfPrison(int ID, string nom): CaseFixe(ID, nom) {
  this->nom = nom;
  this->ID = ID;
}

