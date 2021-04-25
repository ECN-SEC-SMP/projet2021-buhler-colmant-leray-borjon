#pragma once

#include <iostream>
#include "CaseFixe.h"
#include "Joueur.h"

class CfPrison: public CaseFixe
{
  private:
    vector<Joueur> Prison;

  public:
    //Constructeurs
    CfPrison(int ID, string nom);
    ~CfPrison();

    void affichage();
};
