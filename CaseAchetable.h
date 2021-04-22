#pragma once

#include <stdlib.h>
#include <iostream>

#include "Case.h"
#include "Joueur.h"
class Joueur;

class CaseAchetable: public Case 
{
  private:    

  protected :
    Joueur* proprio;
    int prix;

  public:
<<<<<<< HEAD
    CaseAchetable():Case(int ID, string nom);
    
    void acheter(Joueur joueur);
    void action(Joueur &j, Plateau &plateau, int d);
    void affichage();
    void setProprio(Joueur *j);
};