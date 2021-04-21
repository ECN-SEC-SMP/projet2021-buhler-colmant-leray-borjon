#pragma once

#include "CaseAchetable.h"
class CaseAchetable;
#include "Plateau.h"
class Plateau;
#include <stdlib.h>
#include <iostream>
#include <vector>

class Joueur {
private:
    string nom;
    int id;
    int fortune;
    Case* position;
    Plateau* plat;
    vector<CaseAchetable> vproprietes;
    
public:
    string getNom() const;
    int getId() const;
    int getFortune() const;
    Case* getPosition() const;
    void setFortune(int fortune);

    int lanceDe();
    void addPropriete(CaseAchetable newPropriete);
    void paiement(int somme, Joueur destinataire);
    void tourDeJeu();

    // Constructeurs
    Joueur(string nom, int id, Case* position, Plateau* plat);

    // Destructeur
    ~Joueur();
};

