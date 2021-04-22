#pragma once

#include <iostream>
#include "CaseFixe.h"
#include "Joueur.h"

class CfPrison: public CaseFixe
{
  private:
    vector<Joueur> Prison;

  public:
    //constructeurs
    CfPrison():CaseFixe(int ID, string nom);
    void action(Joueur joueur, Plateau plateau, int d);

};
