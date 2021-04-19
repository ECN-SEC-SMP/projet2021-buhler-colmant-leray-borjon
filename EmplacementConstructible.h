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
    // int batiment;
    // int coefValorisation;

  protected:

  public:
    //constructeurs
    EmplacementConstructible(int ID, string nom);
    void action(Joueur joueur, int de);

};
