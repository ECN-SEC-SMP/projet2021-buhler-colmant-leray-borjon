#include "Joueur.h"
#include <stdlib.h>
#include <iostream>


using namespace std;

string Joueur::getNom() const {
    return nom;
}

int Joueur::getId() const {
    return id;
}

int Joueur::getFortune() const {
    return fortune;
}

void Joueur::setFortune(int fortune) {
    this->fortune = fortune;
}

void Joueur::paiement(int somme, Joueur destinataire) {
    destinataire.setFortune(destinataire.getFortune() + somme);
    this -> fortune -= somme;
}

//Lancement d'un dé à 6 faces
int Joueur::lanceDe() {
    int aleat = rand()%6 + 1;
}

//Ajoute une propriété à un joueur
void Joueur::addPropriete(CaseAchetable newPropriete) {
    vproprietes.push_back(newPropriete);
}

//Jete le dé, change la position du joueur et affiche sa nouvelle position sous la forme "Le joueur Killian est en case 20(Gare du Nord)"
void Joueur::tourDeJeu() {
    this -> position = this -> plat -> avance(this->position, lanceDe());
    cout << "Le joueur" << this->nom << "est en case" << this->id << "(" << this->position << ")" << endl;
}


//Destructeurs
Joueur::~Joueur() {
    //nothing to do
}