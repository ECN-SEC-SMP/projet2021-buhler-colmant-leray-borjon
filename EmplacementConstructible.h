#pragma once

struct bat {
  int montant_bat;
  bat *suivant;
}

#include <iostream>
#include "CaseAchetable.h"

class EmplacementConstructible: public CaseAchetable
{
  private:
    int batiment;
    int coefValorisation;
    bat loy;
  protected:

  public:
    //constructeurs
    EmplacementConstructible(int batiment, int coefValorisation):CaseAchetable(int ID, string nom);
    void action(Joueur joueur, int de);

};
