#pragma once

#include <iostream>
#include "CaseAchetable.h"

class EmplacementConstructible: public CaseAchetable
{
  private:
    int batiment;
    int coefValorisation;

  protected:

  public:
    //constructeurs
    EmplacementConstructible():CaseAchetable(int ID, string nom);
    action(Joueur joueur, int de);

};