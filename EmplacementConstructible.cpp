#include <iostream>
#include <stdlib.h>
#include <numeric>
using namespace std;

#include "CaseAchetable.h"
#include "EmplacementConstructible.h"
#include "Joueur.h"

//Constructeurs
EmplacementConstructible::EmplacementConstructible(int ID, string nom): CaseAchetable(ID, nom) {
    this->ID = ID;
    this->nom = nom;
}

EmplacementConstructible::EmplacementConstructible(int ID, string nom, int coefValorisation): CaseAchetable(ID, nom) {
    this->ID = ID;
    this->nom = nom;
    this->coefValorisation=coefValorisation;
    this->prix = 2000 * coefValorisation;
}

//insere liste de batiment
void EmplacementConstructible::insererBatListe(int montant){
    this->bat.push_back(montant);

}

//Affichage
void EmplacementConstructible::affichage(){
  int M=0;
  int H=0;
  cout<< "[" << this->ID << "] - " << this->nom << " (coût: " << this->prix << ") ";
  if (this->proprio!=nullptr){
    cout<< "[Propriétaire: " << this->proprio->getNom();
    cout << " | Loyer: " << this->loyer() << " | Maison(s): "<< M << " | Hotel(s): " << H << "]" << endl;
  }
    else {
    cout<< " - sans propriétaire" << endl;
  }
}

//Fonction Achete
void EmplacementConstructible::acheter(Joueur* joueur, int de) {
// Si dé impair et pas de proprio on achète
    if (de%2 == 1 && !(this->proprio != nullptr)) {
      if(joueur->getFortune() > this->prix){ //si l'acheteur a assez d'argent pour acheter
        this->proprio = joueur;   //le propriétaire devient le joueur passé en paramètre
        joueur->addPropriete(this); //ajoute une propriété au joueur
        joueur->setFortune(joueur->getFortune() - this->prix);  //décremente fortune du joueur par rapport au prix d'achat de l'emplacement
        cout << endl;
        cout << "[ACTION] Le joueur " << joueur->getNom() << " vient d'acquérir la case " << this->nom << endl;
      }
      else {
        cout << endl;
        cout << "[ACTION] Le joueur " << joueur->getNom() << " ne possède pas assez d'argent pour acheter la propriété" << endl; 
      }
    }
}

//Renvoie le montant du loyer de l'emplacement
int EmplacementConstructible::loyer(){
  int loyer = (this->prix + (this->prix)*this->batiment)/2; //calcul le loyer selon le prix et le nombre de batiments present sur la case
  return loyer;
}

//Actions : achat + loyer
void EmplacementConstructible::action(Joueur* joueur, Plateau* plat, int de) {
    //Si il n'y a pas de proprio
    if (!(this->proprio != nullptr)){
      this->acheter(joueur, de); //appel fonction achete
    }
    else{
        joueur->paiement(this->loyer(), this->proprio);
    //   joueur->setFortune(joueur->getFortune() - this->loyer());  //décremente fortune du joueur par rapport au prix du loyer
    //   this->proprio->setFortune(this->proprio->getFortune() + this->loyer());//incrémente la fortune du proprio
      cout << endl;
      cout << "[ACTION] Le joueur " << joueur->getNom() << " vient de payer un loyer de " << this->loyer() << " au joueur " << this->proprio->getNom() << ", pour la case " << this->getNom() << endl;
    }

}
