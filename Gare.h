#pragma once

#include <iostream>
#include "CaseAchetable.h"

class Gare: public CaseAchetable
{
  private:
    int batiment;
    int coefValorisation;

  protected:

  public:
    //constructeurs
    Gare(int ID, string nom);
    void action(Joueur joueur, int de);

};