#pragma once

#include <iostream>
#include "Joueur.h"
class Joueur;
using namespace std;

#include "Case.h"
#include "Joueur.h"
#include "Plateau.h"

class Case
{
  private:

  protected:
    int ID;
    string nom;

  public:
    //constructeurs
    Case(int ID, string nom);

    void action(Joueur joueur, Plateau plateau, int d);
    virtual void affichage()=0;
    int getID();
    void insererBatListe(int montant);
    int loyer();
    void setProprio(Joueur *j);
};
