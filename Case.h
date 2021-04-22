#pragma once

#include <iostream>

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
    void action();
};
