#include <iostream>
#include <stdlib.h>
#include <numeric>
using namespace std;

#include "CaseAchetable.h"
#include "EmplacementConstructible.h"
#include "Joueur.h"

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
    this->bat.push_back(montant);

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
  cout<< "[" << this->ID << "] - " << this->nom << " (coût : " << this->prix << ") ";
  if (this->proprio!=nullptr){
    cout<< "[Propriétaire:" << this->proprio->getNom();
    for(vector<int>::iterator it=bat.begin(); it != bat.end();it++){
      if (*it==100){
        M++;
        cout << "ok2" <<endl;
      }
      else{
        H++;
      }
    }
    cout << " | Loyer:" << this->loyer() << " | Maison(s):"<< M << " | Hotel(s):" << H << "]" << endl;
  }
    else {
    cout<< " - sans propriétaire" << endl;
  }
}

void EmplacementConstructible::action(Joueur* joueur, Plateau* plat, int de) {
    // Si dé impair et pas de proprio on achète
    if (de%2 == 1 && !(this->proprio != nullptr)) {
      if(joueur->getFortune() > this->prix){
        this->proprio = joueur;   //le propriétaire devient le joueur passé en paramètre
        joueur->addPropriete(this); //ajoute une propriété au joueur
        joueur->setFortune(joueur->getFortune() - this->prix);  //décremente fortune du joueur par rapport au prix d'achat de l'emplacement
        cout << "Le joueur " << joueur->getNom() << " vient d'acquérir la case " << this->nom << endl;
      }
      else cout << "Le joueur " << joueur->getNom() << "ne possède pas assez d'argent pour acheter la propriété" << endl; 

    }

}

