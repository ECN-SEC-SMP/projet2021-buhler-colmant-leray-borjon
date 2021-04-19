#pragma once

#include <iostream>
#include "CaseFixe.h"

class CfPrison: public CaseFixe
{
  private:
    vector<Joueur> Prison;

  public:
    //constructeurs
    CfPrison(int ID, string nom);
    void action(Joueur joueur, int de);

};
