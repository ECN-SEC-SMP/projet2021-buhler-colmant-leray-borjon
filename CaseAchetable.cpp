#include <iostream>
#include "Case.h"
#include "CaseAchetable.h"
using namespace std;

CaseAchetable::CaseAchetable(int ID, string nom) : Case(ID, nom) {
  this->proprio =  nullptr;
  this->nom = nom;
  this->ID = ID;
}

<<<<<<< HEAD
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
=======
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
>>>>>>> Plateau


// void CaseAchetable::acheter(){

<<<<<<< HEAD
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
=======
// }
>>>>>>> Plateau
