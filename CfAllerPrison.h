#pragma once

#include <iostream>

#include "CaseFixe.h"
<<<<<<< HEAD
#include "CfAllerPrison.h"
=======
#include "Joueur.h"
>>>>>>> origin/case

class CfAllerPrison: public CaseFixe
{
  private:

  protected:

  public:
    //constructeurs
<<<<<<< HEAD
    CfAllerPrison():CaseFixe(int ID, string nom);

    //fonctions
    void action(Joueur joueur, Plateau plateau, int d)
=======
    CfAllerPrison(int ID, string nom);
    void action(Joueur joueur, int de);
>>>>>>> origin/case

};
