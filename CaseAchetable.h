#pragma once

#include <stdlib.h>
#include <iostream>
#include "Case.h"
#include "Joueur.h"
class Joueur;

class CaseAchetable: public Case {
  private:

  protected :
    Joueur* proprio;
    int prix;    

  public:
    CaseAchetable(int ID, string nom);
    void acheter(Joueur j);
    void affichage();
    
    void setProprio(Joueur* j);
};