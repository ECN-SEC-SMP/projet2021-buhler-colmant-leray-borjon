#pragma once

#include <iostream>
#include "Case.h"

class CaseAchetable: public Case {
  private:
    joueur *proprio;

  protected :

  public:
    CaseAchetable():Case(int ID, string nom);
    void acheter(Joueur)
    
};