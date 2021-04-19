#include <iostream>
#include "Case.h"
#include "CaseAchetable.h"
using namespace std;

CaseAchetable::CaseAchetable(){
  this->proprio = NULL;

}

void CaseAchetable::action(Joueur &j, int de){
  // achetable ?
  // paiement ?? fortune assez élevée ?
  // si oui -> addPropriete(CaseAchetable position)
  if (proprio!=NULL){
    j.paiement (loyer(),&proprio);
  }
  else if (de%2==1){ // lancer de dé impair
    if (j.getFortune()>1000){ // Remplacez 1000 par le prix d'achat spécifique de la  case
    j.setFortune(j.getFortune()-1000);
      j.addPropriete(j.position);
      }
  }
}


void CaseAchetable::acheter(){

}

void CaseAchetable::affichage(){
  cout<< this->nom << "(coût : " << this->prix << ")";
  if (proprio!=nullptr){
    cout<< proprio->getNom() << endl;
  }
  else {
    cout<< "- sans propriétaire" << endl;
  }
}