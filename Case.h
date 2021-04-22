#pragma once

#include <iostream>

class Joueur;

using namespace std;

class Joueur;
class Plateau;

class Case
{
  private:

  protected:
    int ID;
    string nom;

  public:
    //constructeurs
    Case(int ID, string nom);

    void action(Joueur* joueur, Plateau* plateau, int d);
    virtual void affichage()=0;
    int getID();
    void insererBatListe(int montant);
    int loyer();
    void setProprio(Joueur* j);
};
