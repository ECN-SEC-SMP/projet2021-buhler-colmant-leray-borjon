#pragma once

/*struct bat {
  int montant_bat;
  bat *suivant;
};*/

#include <iostream>
#include "CaseAchetable.h"
#include <vector>

class EmplacementConstructible: public CaseAchetable
{
  private:
    int batiment;
    int coefValorisation;
    vector <int> bat;

  protected:

  public:
    //Constructeurs
    EmplacementConstructible(int ID, string nom);
    EmplacementConstructible(int ID, string nom, int coefValorisation);

    void insererBatListe(int montant);
    int loyer();
    void acheter(Joueur* joueur, int de);
    void action(Joueur* joueur, Plateau* plat, int de) override;
    void affichage();

};
