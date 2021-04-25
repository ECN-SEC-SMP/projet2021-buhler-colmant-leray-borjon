#pragma once

#include <iostream>
#include "CaseAchetable.h"

class Gare: public CaseAchetable
{
  private:

  protected:

  public:
    //Constructeurs
    Gare(int ID, string nom);
    ~Gare();

    void action(Joueur* joueur, Plateau* plat, int de);
    void affichage();
    int loyer();
    void acheter(Joueur* joueur, int de);

};