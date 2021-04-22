#include <iostream>

#include "Case.h"
#include "Joueur.h"
#include "CaseAchetable.h"
using namespace std;

CaseAchetable::CaseAchetable(int ID, string nom) : Case(ID, nom) {
  this->proprio = nullptr;
  this->nom = nom;
  this->ID = ID;
  this->prix = 100;
}

void CaseAchetable::action(Joueur* j, Plateau* plateau, int d){
  // achetable ?
  // paiement ?? fortune assez élevée ?
  // si oui -> addPropriete(CaseAchetable position)
  cout << "ok" << endl;
  if (this->proprio!=NULL){
    j->paiement(this->loyer(),this->proprio);
  }
}

// void CaseAchetable::action(Joueur &j, int d){
//   // achetable ?
//   // paiement ?? fortune assez élevée ?
//   // si oui -> addPropriete(CaseAchetable position)
//   // if (this->proprio!=nullptr){
//   //   j.paiement (loyer(),&proprio);
//   // }
//   // else if (d%2==1){ // lancer de dé impair
//   //   if (j.fortune>1000){ // Remplacez 1000 par le prix d'achat spécifique de la  case
//   //     j.fortune -= 1000;
//   //     j.addPropriete(j.position);
//   //     }
//   // }
// }


// Utile pour Gare
void CaseAchetable::affichage(){
  int M;int H;
  cout<< "[" << this->ID << "] - " << this->nom << "(coût : " << this->prix << ")";
  if (proprio!=nullptr){
    cout<< proprio->getNom()<< endl;
  }
  else {
    cout<< "- sans propriétaire" << endl;
  }
}

void CaseAchetable::acheter(Joueur* j){
  if (this->proprio->getFortune() > prix) {
    this->proprio=j;
    this->proprio->setFortune(this->proprio->getFortune() - this->prix);
    cout << this->proprio->getNom() << endl;
  }
}

