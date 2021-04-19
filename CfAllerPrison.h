#pragma once

#include <iostream>
#include "CaseFixe.h"

class CfAllerPrison: public CaseFixe
{
  private:

  protected:

  public:
    //constructeurs
    CfAllerPrison():CaseFixe(int ID, string nom);
    action(Joueur joueur, int de);

};
