#pragma once

#include <iostream>
#include "CaseFixe.h"
#include "Joueur.h"


class CfChance: public CaseFixe
{
  private:

  protected:

  public:
    //constructeurs
    CfChance():CaseFixe(int ID, string nom);
    void action(Joueur joueur, Plateau plateau, int d);

};
