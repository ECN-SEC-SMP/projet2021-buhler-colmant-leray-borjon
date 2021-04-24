#include <iostream>

#include "Case.h"
#include "Joueur.h"
#include "CaseAchetable.h"
using namespace std;

//Constructeur
CaseAchetable::CaseAchetable(int ID, string nom) : Case(ID, nom) {
  this->proprio = nullptr;
  this->nom = nom;
  this->ID = ID;
  this->prix = 2000;
}

CaseAchetable::~CaseAchetable() {
    //nothing to do
}

void CaseAchetable::action(Joueur* j, Plateau* plateau, int d){
  
}

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

