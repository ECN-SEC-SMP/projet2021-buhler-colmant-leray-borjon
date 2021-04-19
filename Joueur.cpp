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

//Si le joueur a assez d'argent pour payer, il paye le joueur destinataire. Sinon, il donne le reste de sa fortune au joueur destinataire et est éliminé.
void Joueur::paiement(int somme, Joueur destinataire) {
  if(somme < this->fortune){
    destinataire.setFortune(destinataire.getFortune() + somme);
    this->fortune -= somme;
  }
  else
  {
    destinataire.setFortune(destinataire.getFortune() + this->fortune);
    this->fortune -= somme;
    plat.remove_player(this);
  }
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



//Constructeur
Joueur::Joueur(string nom, int id, Case position, Plateau plat){
    this->nom=nom;
    this->id=id;
    this->fortune=100000;
    this->position=position;
    this->plat=plat;
}

//Destructeurs
Joueur::~Joueur() {
    //nothing to do
}