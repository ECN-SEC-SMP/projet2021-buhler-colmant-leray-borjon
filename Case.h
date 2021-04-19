#pragma once

#include <iostream>

class Case
{
  private:

  protected:
    int ID;
    string nom;

  public:
    string getNom() const;
    
    //constructeurs
    Case();
    Case(int ID, string nom);


};
