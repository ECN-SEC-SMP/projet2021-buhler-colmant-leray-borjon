#include <iostream>
#include "Case.h"
#include "CaseAchetable.h"

CaseAchetable::CaseAchetable(){
  this->proprio = NULL;

}

void CaseAchetable::action(Joueur &j, int d){
  // achetable ?
  // paiement ?? fortune assez élevée ?
  // si oui -> addPropriete(CaseAchetable position)
  if (proprio!=NULL){
    j.paiement (loyer(),&proprio);
  }
  else if (d%2==1){ // lancer de dé impair
    if (j.fortune>1000){ // Remplacez 1000 par le prix d'achat spécifique de la  case
      j.fortune -= 1000;
      j.addPropriete(j.position);
      }
  }
}


void CaseAchetable::acheter(){

}