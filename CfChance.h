#pragma once

#include <iostream>
#include "CaseFixe.h"
#include "Joueur.h"


class CfChance: public CaseFixe
{
  private:

  protected:

  public:
    //Constructeurs
    CfChance(int ID, string nom);
    ~CfChance();

    void action(Joueur* joueur, Plateau* plateau, int d);

};
