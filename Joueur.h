#pragma once

#include <stdlib.h>
#include <iostream>
#include <vector>

#include "CaseAchetable.h"
class CaseAchetable;
#include "Plateau.h"
class Plateau;

class Joueur {
private:
    string nom;
    int ID;
    int fortune;
    Case* position;
    Plateau* plat;
    vector<CaseAchetable> vproprietes;
    int nbJPrison;
    
public:
    string getNom() const;
    int getID() const;
    int getFortune() const;
    Case* getPosition() const;
    void setFortune(int fortune);
    void setPosition(Case* c);
    int getnbJPrison() const;
    void setnbJPrison(int nbJPrison);

    int lanceDe();
    void addPropriete(CaseAchetable* newPropriete);
    void paiement(int somme, Joueur* destinataire);
    void tourDeJeu();


    // Constructeurs
    Joueur(string nom, int id, Case* position, Plateau* plat);

    // Destructeur
    ~Joueur();

};
