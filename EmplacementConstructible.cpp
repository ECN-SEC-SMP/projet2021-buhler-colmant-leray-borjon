#include <iostream>
#include <stdlib.h>
#include <numeric>
using namespace std;

#include "EmplacementConstructible.h"

//constructeurs
EmplacementConstructible::EmplacementConstructible(int ID, string nom): CaseAchetable(ID, nom) {
    this->ID = ID;
    this->nom = nom;
}

EmplacementConstructible::EmplacementConstructible(int ID, string nom, int coefValorisation): CaseAchetable(ID, nom) {
    this->ID = ID;
    this->nom = nom;
    this->coefValorisation=coefValorisation;
}

/*bat* EmplacementConstructible::creeBatListe(int montant){
  bat* patrimoine;
  patrimoine = new bat;
  patrimoine->montant_bat=montant*this->coefValorisation;
  return patrimoine;
}*/

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
  cout << "ok" <<endl;
  int M=0;
  int H=0;
  cout<< "[" << this->ID << "] - " << this->nom << "(coût : " << this->prix << ")";
  if (this->proprio!=nullptr){
    cout<< this->proprio->getNom();
    for(vector<int>::iterator it=bat.begin(); it != bat.end();it++){
      if (*it==100){
        M = M+1;
        cout << "ok2" <<endl;
      }
      else{
        H = H+1;
      }
    }
    cout << this->loyer() << "maison(s)="<< M << "hotel(s)=" << H << endl;
  }

  else {
    cout<< "- sans propriétaire" << endl;
  }
}