#pragma once

#include <iostream>
#include "CaseFixe.h"

class CfChance: public CaseFixe
{
  private:

  protected:

  public:
    //constructeurs
    CfChance(int ID, string nom);
    void action(Joueur joueur, int de);

};
