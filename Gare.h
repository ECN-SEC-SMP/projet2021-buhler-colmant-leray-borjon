#pragma once

#include <iostream>
#include "CaseAchetable.h"

class Gare: public CaseAchetable
{
  private:

  protected:

  public:
    //constructeurs
    Gare(int ID, string nom);
    void action(Joueur* joueur, Plateau* plat, int de);

};