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
    CfDepart():CaseFixe(int ID, string nom);
    void action(Joueur joueur, Plateau plateau, int d);

    void plus2000(Joueur joueur); //c'est quoi cette fonction ??

};
