#pragma once

#include <stdlib.h>
#include <iostream>
#include "Case.h"
#include "Joueur.h"

class CaseAchetable: public Case {
  private:
    Joueur *proprio;
    int prix;    

  protected :

  public:
    CaseAchetable(int ID, string nom);
    void acheter(Joueur);
    
};