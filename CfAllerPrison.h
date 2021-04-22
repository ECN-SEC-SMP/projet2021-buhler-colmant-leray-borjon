#pragma once

#include <iostream>

#include "CaseFixe.h"
#include "Joueur.h"

class CfAllerPrison: public CaseFixe
{
  private:

  protected:

  public:
    //constructeurs
    CfAllerPrison(int ID, string nom);

    //fonctions
    void action(Joueur* joueur, Plateau* plateau, int d);
};
