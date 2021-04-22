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
<<<<<<< HEAD
    CfDepart():CaseFixe(int ID, string nom);
    action(Joueur joueur, Plateau plateau, int d);

    plus2000(Joueur joueur);
=======
    CfDepart(int ID, string nom);
    void action(Joueur joueur, int de);
>>>>>>> origin/case

};
