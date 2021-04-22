#pragma once

#include <iostream>
#include "CaseFixe.h"
#include "Joueur.h"


class CfChance: public CaseFixe
{
  private:

  protected:

  public:
    //constructeurs
<<<<<<< HEAD
    CfChance():CaseFixe(int ID, string nom);
    action(Joueur joueur, Plateau plateau, int d);
=======
    CfChance(int ID, string nom);
    void action(Joueur joueur, int de);
>>>>>>> origin/case

};
