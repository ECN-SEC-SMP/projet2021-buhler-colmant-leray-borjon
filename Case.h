#pragma once

#include <iostream>

class Joueur;

using namespace std;

class Case
{
  private:

  protected:
    int ID;
    string nom;

  public:
    //constructeurs
    Case(int ID, string nom);
    virtual void affichage()=0;
    int getID();
    void insererBatListe(int montant);
    int loyer();
    void setProprio(Joueur* j);
};
