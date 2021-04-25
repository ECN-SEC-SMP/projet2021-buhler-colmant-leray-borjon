#pragma once

#include <iostream>
#include "Case.h"

class CaseFixe: public Case
{
  private:

  protected:

  public:
    //Constructeurs
    CaseFixe(int ID, string nom);
    ~CaseFixe();
    
    void action(Joueur* j, Plateau* plateau, int d);
    void affichage();

};
