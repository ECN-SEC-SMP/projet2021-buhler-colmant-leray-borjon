#pragma once

#include <stdlib.h>
#include <iostream>
#include "Case.h"

class CaseAchetable: public Case {
  private:
    joueur *proprio;
    int prix;    

  protected :

  public:
    CaseAchetable():Case(int ID, string nom);
    void acheter(Joueur)
    
};