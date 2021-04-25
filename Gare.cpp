#include <iostream>
#include <stdlib.h>
#include <numeric>
using namespace std;

#include "CaseAchetable.h"
#include "Gare.h"
#include "Joueur.h"

//Constructeur
Gare::Gare(int ID, string nom) : CaseAchetable(ID, nom) {
    this->ID =ID;
    this->nom = nom;
    this->prix = 2500;
}

//Destructeurs
Gare::~Gare() {
    //nothing to do
}

//Fonctions

//affichage
void Gare::affichage(){
  int M=0;
  int H=0;
  cout<< "[" << this->ID << "] - " << this->nom << " (coût: " << this->prix << ") ";
  if (this->proprio!=nullptr){
    cout<< "[Propriétaire: " << this->proprio->getNom();
    cout << " | Loyer: " << this->loyer() << "]" << endl;
  }
    else {
    cout<< " - sans propriétaire" << endl;
  }
}

//Fonction achete
void Gare::acheter(Joueur* joueur, int de) {
// Si dé impair et pas de proprio on achète
    if (de%2 == 1 && (this->proprio == nullptr)) {
      if(joueur->getFortune() > this->prix){
        this->proprio = joueur;   //le propriétaire devient le joueur passé en paramètre
        joueur->addPropriete(this); //ajoute une propriété au joueur
        joueur->setFortune(joueur->getFortune() - this->prix);  //décremente fortune du joueur par rapport au prix d'achat de l'emplacement
        joueur->ajouterGare(); //on ajoute une gare au nombre de gare du joueur

        cout << endl;
        cout << "[ACTION] Le joueur " << joueur->getNom() << " vient d'acquérir la " << this->nom << endl;
      }
      else {
        cout << endl;
        cout << "[ACTION] Le joueur " << joueur->getNom() << "ne possède pas assez d'argent pour acheter la " << this->nom << endl;
      }
    }

}

//Renvoie le montant du loyer de l'emplacement
int Gare::loyer(){
  int loyer = 2500 * (this->proprio->get_nbGare());
  return loyer;
}
    
//Action : Achete + loyer
void Gare::action(Joueur* joueur, Plateau* plat, int de) {
    //Si il n'y a pas de proprio
    if (this->proprio == nullptr){
      this->acheter(joueur, de);
    }
    else{
        joueur->paiement(this->loyer(), this->proprio);
    //   joueur->setFortune(joueur->getFortune() - this->loyer());  //décremente fortune du joueur par rapport au prix du loyer
    //   this->proprio->setFortune(this->proprio->getFortune() + this->loyer());//incrémente la fortune du proprio
      cout << endl;
      cout << "[ACTION] Le joueur " << joueur->getNom() << " vient de payer un loyer de " << this->loyer() << " au joueur " << this->proprio->getNom() << ", pour la " << this->getNom() << endl;
    }
}