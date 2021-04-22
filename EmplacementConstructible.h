#pragma once

/*struct bat {
  int montant_bat;
  bat *suivant;
};*/

#include <iostream>
#include "CaseAchetable.h"
#include <vector>

class EmplacementConstructible: public CaseAchetable
{
  private:
    int batiment;
    int coefValorisation;
    //bat loy;
    vector <int> bat;

  protected:

  public:
    //constructeurs
    EmplacementConstructible(int ID, string nom);
    EmplacementConstructible(int ID, string nom, int coefValorisation);
    //bat* EmplacementConstructible::creeBatListe(int montant);
    void insererBatListe(int montant);
    int loyer();
    //void action(Joueur* joueur, Plateau* plat, int de);
    void affichage();

};
