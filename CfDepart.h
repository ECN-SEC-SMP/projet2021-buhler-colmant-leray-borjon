#pragma once

#include <iostream>
#include "CaseFixe.h"

class CfDepart: public CaseFixe
{
  private:

  protected:

  public:
    //constructeurs
    CfDepart():CaseFixe(int ID, string nom);
    action(Joueur joueur, int de);

};
