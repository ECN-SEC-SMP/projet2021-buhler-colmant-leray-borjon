#pragma once

#include <stdlib.h>
#include <iostream>
#include <vector>

#include "CaseAchetable.h"
#include "CaseFixe.h"
#include "Plateau.h"
#include "Joueur.h"

class Joueur {
private:
    string nom;
    int id;
    int fortune;
    Case position;
    Plateau plat;
    vector<CaseAchetable> vproprietes;
    int nbJPrison;
    
public:
    string getNom() const;
    int getId() const;
    int getFortune() const;
    void setFortune(int fortune);
    void setPosition(Case case);
    int Joueur::getnbJPrison();
    void Joueur::setnbJPrison(int nbJPrison);
}

void Joueur::setnbJPrison(int nbJPrison) {

    int lanceDe();
    void addPropriete(CaseAchetable newPropriete);
    void paiement(int somme, Joueur destinataire);
    void tourDeJeu();


    // Constructeurs
    Joueur(string nom, int id, Case position, Plateau plat);

    // Destructeur
    ~Joueur();
};

#endif /* Joueur_h */
