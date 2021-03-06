#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Case.h"
#include "CaseFixe.h"
#include "CfDepart.h"

//Constructeur
CfDepart::CfDepart(int ID, string nom):CaseFixe(ID, nom) {
    this->ID;
    this->nom;
}

//Destructeurs
CfDepart::~CfDepart() {
    //nothing to do
}

void CfDepart::action(Joueur* joueur, Plateau* plateau, int d){
  joueur->setFortune(joueur->getFortune() + 500); //Le joueur gagne 500 coin en passant sur la case CfDepart
  cout << endl;
  cout << "[ACTION] Le joueur " << joueur->getNom() << " gagne 500 coins en passant par la case Départ" << endl;
}
