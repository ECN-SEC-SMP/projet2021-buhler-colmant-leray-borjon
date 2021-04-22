#pragma once

/*struct bat {
  int montant_bat;
  bat *suivant;
}*/

#include <iostream>
#include "CaseAchetable.h"

class EmplacementConstructible: public CaseAchetable
{
  private:
    int batiment;
    int coefValorisation;
    vector <int> bat;

  protected:

  public:
    //constructeurs
    EmplacementConstructible(int ID, string nom);
    EmplacementConstructible(int ID, string nom, int coefValorisation);
    void action(Joueur joueur, int de);
    void insererBatListe(int montant);
    int loyer();
    void affichage();
};
