#pragma once

#include <iostream>
#include "Case.h"

class CaseFixe: public Case
{
  private:

  protected:

  public:
    //constructeurs
    CaseFixe():Case(int ID, string nom);
    action(Joueur &j, Plateau &plateau, int d);

};
