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
    int fortune = 100000;
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

    // constructeurs
    Joueur(string nom, int id);

    // destructeur
    ~Joueur();
};

#endif /* Joueur_h */
