#pragma once

#include <iostream>
#include "CaseFixe.h"

class CfPrison: public CaseFixe
{
  private:
    vector<Joueur> Prison

  protected:

  public:
    //constructeurs
    CfPrison():CaseFixe(int ID, string nom);
    action(Joueur joueur, int de);

};
