#include <iostream>

#include "CaseAchetable.h"
using namespace std;

CaseAchetable::CaseAchetable(int ID, string nom) : Case(ID, nom) {
  this->proprio =  nullptr;
  this->nom = nom;
  this->ID = ID;
}

<<<<<<< HEAD
void CaseAchetable::action(Joueur &j, Plateau &plateau, int d){
  // achetable ?
  // paiement ?? fortune assez élevée ?
  // si oui -> addPropriete(CaseAchetable position)
  if (proprio!=NULL){
    j.paiement (loyer(),&proprio);
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


// void CaseAchetable::acheter(){

//}

void CaseAchetable::affichage(){
  int M;int H;
  cout<< "[" << this->ID << "] - " << this->nom << "(coût : " << this->prix << ")";
  if (proprio!=nullptr){
    cout<< proprio->getNom()<< endl;
>>>>>>> origin/case
  }
  
  else {
    cout<< "- sans propriétaire" << endl;
  }
}

void CaseAchetable::setProprio(Joueur *j){
  this->proprio=j;
}