#pragma once

#include <stdlib.h>
#include <iostream>
#include "Case.h"
#include "Joueur.h"

class CaseAchetable: public Case {
  private:
    Joueur *proprio;
    int prix;    


  public:
    CaseAchetable():Case(int ID, string nom);
//    void acheter(Joueur j);
    
};
