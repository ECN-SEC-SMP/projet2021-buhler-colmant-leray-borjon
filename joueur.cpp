#include "joueur.h"

int joueur::getNumero() {
    return numero;
}

float joueur::getSolde() {
    return solde;
}

void joueur::crediter(float montant) {
    solde += montant;
}

bool joueur::debiter(float montant) {
    if (!ib && solde>=montant) {
        solde -= montant;
        return true;
    }
    return false;
}

joueur::joueur(int _numero) {
    numero = _numero;
    solde = 0.0;
    ib = false;
}

joueur::~joueur() {
    //nothing to do
}