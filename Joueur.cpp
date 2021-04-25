#include <stdlib.h>
#include <iostream>

#include "Joueur.h"

using namespace std;

//Constructeur
Joueur::Joueur(string nom, int ID, Case* position, Plateau* plat){
    this->nom=nom;
    this->ID=ID;
    this->fortune=7500;
    this->position=position;
    this->plat=plat;
    this->nbGare=0;
}

//Destructeurs
Joueur::~Joueur() {
    //nothing to do
}

//Setter & Getter
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

//Fonctions

//Si le joueur a assez d'argent pour payer, il paye le joueur destinataire. Sinon, il donne le reste de sa fortune au joueur destinataire et est éliminé.
void Joueur::paiement(int somme, Joueur* destinataire) {
  if(somme <= this->fortune){
    destinataire->setFortune(destinataire->getFortune() + somme);
    this->fortune -= somme;
  } else
  {
    destinataire->setFortune(destinataire->getFortune() + this->fortune);
    this->plat->removeJoueur(this);
    cout << "Le joueur " << this->nom << " est éliminé !" << endl;
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
    this->position = this->plat->avance(this->position, d);
    this->position->action(this, this->plat, d);
}

int Joueur::get_nbGare() const
{
  return this->nbGare;
}

void Joueur::ajouterGare()
{
  this->nbGare =  (this->nbGare + 1) ;
}

// Surcharge de l'opérateur ==
bool operator==(Joueur const& a, Joueur const& b)
{
    if (a.getNom() == b.getNom() && b.getID() == b.getID())
        return true;
    else
        return false;
}