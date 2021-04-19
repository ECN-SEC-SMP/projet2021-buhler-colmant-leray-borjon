#pragma once

struct bat {
  int montant_bat;
  bat *suivant;
}

class EmplacementConstructible: public CaseAchetable
{
  private:
    int batiment;
    int coefValorisation;

  protected:

  public:
    //constructeurs
    EmplacementConstructible(int batiment, int coefValorisation);

};
