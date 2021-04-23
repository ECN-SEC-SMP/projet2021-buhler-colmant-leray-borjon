#include <stdlib.h>
#include <iostream>

#include "Joueur.h"

using namespace std;

string Joueur::getNom() const {
    return this->nom;
}

int Joueur::getID() const {
    return ID;
}

int Joueur::getFortune() const {
    return this->fortune;
}

Case* Joueur::getPosition() const {
    return this->position;
}

void Joueur::setFortune(int fortune) {
    this->fortune = fortune;
}

void Joueur::setPosition(Case* position) {
  this->position = position;
}

int Joueur::getnbJPrison() const {
    return this->nbJPrison;
}

void Joueur::setnbJPrison(int nbJPrison) {
    this->nbJPrison = nbJPrison;
}

//Si le joueur a assez d'argent pour payer, il paye le joueur destinataire. Sinon, il donne le reste de sa fortune au joueur destinataire et est éliminé.
void Joueur::paiement(int somme, Joueur* destinataire) {
  if(somme < this->fortune){
    destinataire->setFortune(destinataire->getFortune() + somme);
    this->fortune -= somme;
  }
  else
  {
    destinataire->setFortune(destinataire->getFortune() + this->fortune);
    this->fortune -= somme;
    this->plat->removeJoueur(this);
  }
}

//Lancement d'un dé à 6 faces
int Joueur::lanceDe() {
    return rand()%6 + 1;
}

//Ajoute une propriété à un joueur
void Joueur::addPropriete(CaseAchetable* newPropriete) {
    vproprietes.push_back(*newPropriete);
}


//Jete le dé, change la position du joueur
void Joueur::tourDeJeu() {
    int d = this->lanceDe();
    this -> position = this -> plat -> avance(this->position, d);
    this->position->action(this, this->plat, d);
}



//Constructeur
Joueur::Joueur(string nom, int id, Case* position, Plateau* plat){
    this->nom=nom;
    this->ID=ID;
    this->fortune=100000;
    this->position=position;
    this->plat=plat;
}

//Destructeurs
Joueur::~Joueur() {
    //nothing to do
}