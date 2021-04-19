#pragma once

#include <stdlib.h>
#include <vector>
#include "Joueur.h"
#include "Case.h"

using namespace std;

class Plateau {
    private:
        vector<Case> plateau[39];
        vector<Joueur> joueursActifs;
        vector<Joueur> joueursInactifs;

    public:
        Plateau();

        void initPlateau();
        void affichage();
        Case avance(Case c, int d);
        void finDePartie();
        int nbGares(Joueur j);
        void jeu();
        void removeJoueur(Joueur j);
        bool isGameOver();
};
