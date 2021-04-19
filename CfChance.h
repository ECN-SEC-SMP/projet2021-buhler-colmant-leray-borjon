#pragma once

#include <iostream>
#include "CaseFixe.h"

class CfChance: public CaseFixe
{
  private:

  protected:

  public:
    //constructeurs
    CfChance():CaseFixe(int ID, string nom);
    action(Joueur joueur, int de);

};
