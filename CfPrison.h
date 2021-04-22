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
<<<<<<< HEAD
    CfPrison():CaseFixe(int ID, string nom);
    action(Joueur joueur, Plateau plateau, int d);
=======
    CfPrison(int ID, string nom);
    void action(Joueur joueur, int de);
>>>>>>> origin/case

};
