#pragma once

#include <stdlib.h>
#include "Joueur.h"
#include "Gare.h"
#include "EmplacementConstructible.h"

using namespace std;

class Plateau {
    private:
        vector<Case> plateau[40];
        vector<Joueur> joueursActifs;
        vector<Joueur> joueursInactifs;

    public:
        Plateau();

        Case getCase(int case);

        void initPlateau();
        void affichage();
        Case avance(Case c, int d);
        void finDePartie();
        int nbGares(Joueur j);
        void jeu();
        void removeJoueur(Joueur j);
        boolean isGameOver();
};