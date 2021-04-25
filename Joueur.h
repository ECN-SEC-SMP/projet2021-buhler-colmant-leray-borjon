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
    int nbGare;
    
public:
    // Constructeurs
    Joueur(string nom, int ID, Case* position, Plateau* plat);
    ~Joueur();
    
    string getNom() const;
    int getID() const;
    int getFortune() const;
    Case* getPosition() const;
    void setFortune(int fortune);
    void setPosition(Case* c);
    int getnbJPrison() const;
    void setnbJPrison(int nbJPrison);
    int get_nbGare() const;

    void ajouterGare();
    int lanceDe();
    void addPropriete(CaseAchetable* newPropriete);
    void paiement(int somme, Joueur* destinataire);
    void tourDeJeu();
    

};

bool operator==(Joueur const& a, Joueur const& b);
