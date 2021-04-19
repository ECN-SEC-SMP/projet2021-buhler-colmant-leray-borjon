#ifndef Joueur_h
#define Joueur_h

#include "CaseAchetable.h"
#include "Case.h"
#include "Plateau.h"
#include <stdlib.h>
#include <iostream>
#include <vector>

class Joueur {
private:
    string nom;
    int id;
    int fortune;
    Case position;
    Plateau plat;
    vector<CaseAchetable> vproprietes;
    
public:
    string getNom() const;
    int getId() const;
    int getFortune() const;
    void setFortune(int fortune);

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
