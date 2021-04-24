#pragma once

#include <iostream>
#include "CaseFixe.h"
#include "Joueur.h"

class CfDepart: public CaseFixe
{
  private:

  protected:

  public:
    //Constructeurs
    CfDepart(int ID, string nom);
    ~CfDepart();

    void action(Joueur* joueur, Plateau* plateau, int d);
};
