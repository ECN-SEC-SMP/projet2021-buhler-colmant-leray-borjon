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
    void action(Joueur joueur, int de);

};
