#pragma once

#include <iostream>

#include "CaseFixe.h"
#include "Joueur.h"

class CfAllerPrison: public CaseFixe
{
  private:

  protected:

  public:
    //Constructeurs
    CfAllerPrison(int ID, string nom);
    ~CfAllerPrison();

    //fonctions
    void action(Joueur* joueur, Plateau* plateau, int d);
};
