#include "Gare.h"

Gare::Gare(int ID, string nom) : CaseAchetable(ID, nom) {
    this->ID =ID;
    this->nom = nom;
}