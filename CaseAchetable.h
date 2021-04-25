#pragma once

#include <stdlib.h>
#include <iostream>

#include "Case.h"
class Joueur;
class Plateau;

class CaseAchetable: public Case {
  private:

  protected :
    Joueur* proprio;
    int prix;    

  public:
    CaseAchetable(int ID, string nom);
    ~CaseAchetable();
    
    void action(Joueur* j, Plateau* plateau, int d) override;
    void affichage();
    void achete(Joueur *j);
    int getPrix() const;
};
