#pragma once

#include <stdlib.h>

class CaseAchetable: public Case {
  private:
    joueur *proprio;
    int prix;
  public:
    CaseAchetable();
    void CaseAchetable::acheter();
    
};