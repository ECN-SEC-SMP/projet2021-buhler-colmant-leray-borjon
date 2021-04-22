#include <iostream>
#include <stdlib.h>
#include <numeric>
using namespace std;

#include "CaseAchetable.h"
#include "EmplacementConstructible.h"

//constructeur
EmplacementConstructible::EmplacementConstructible(int ID, string nom): CaseAchetable(ID, nom) {
    this->ID = ID;
    this->nom = nom;
}

EmplacementConstructible::EmplacementConstructible(int ID, string nom, int coefValorisation): CaseAchetable(ID, nom) {
    this->ID = ID;
    this->nom = nom;
    this->coefValorisation=coefValorisation;
}

void EmplacementConstructible::insererBatListe(int montant){
    bat.push_back(montant);
}


int EmplacementConstructible::loyer(){
    return this->coefValorisation*accumulate(bat.begin(),bat.end(),0);
  /*int somme;
  for(vector<int>::iterator it=bat.begin(); it != bat.end();it++){
    cout<<*it<< " "<<endl;
  }*/
}

void EmplacementConstructible::affichage(){
  int M=0;
  int H=0;
  cout<< "[" << this->ID << "] - " << this->nom << "(coût : " << this->prix << ")";
  if (this->proprio!=nullptr){
    cout<< this->proprio->getNom();
    for(vector<int>::iterator it=bat.begin(); it != bat.end();it++){
      if (*it==100){
        M++;
        cout << "ok2" <<endl;
      }
      else{
        H++;
      }
    }
    cout << this->loyer() << "maison(s)="<< M << "hotel(s)=" << H << endl;
  }
    else {
    cout<< "- sans propriétaire" << endl;
  }
}

