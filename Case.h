#pragma once

#include <iostream>

#include "Case.h"
#include "Joueur.h"
#include "Plateau.h"

class Case
{
  private:

  protected:
    int ID;
    string nom;

  public:
    //constructeurs
    Case(int ID, string nom);
    action(Joueur joueur, Plateau plateau, int d);

};
