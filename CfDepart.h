#pragma once

#include <iostream>
#include "CaseFixe.h"
#include "Joueur.h"

class CfDepart: public CaseFixe
{
  private:

  protected:

  public:
    //constructeurs
    CfDepart(int ID, string nom);
    void action(Joueur joueur, int de);

};
