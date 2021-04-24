#pragma once

#include <iostream>

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
    Case();
    Case(int ID, string nom);
    ~Case();

    virtual void action(Joueur* joueur, Plateau* plateau, int d)=0;
    virtual void affichage()=0;
    int getID();
    string getNom() const;
    void insererBatListe(int montant);
    int loyer();
};
