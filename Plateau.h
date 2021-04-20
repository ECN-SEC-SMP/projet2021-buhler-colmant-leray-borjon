#pragma once

#include <stdlib.h>
#include <vector>
#include "Joueur.h"
class Joueur;
#include "Case.h"


using namespace std;

class Plateau {
    private:
        Case* plateau[40];
        vector<Joueur> joueursActifs;
        vector<Joueur> joueursInactifs;

    public:
        Plateau();

        void initPlateau();
        void affichage();
        Case* avance(Case* c, int d);
        void finDePartie();
        int nbGares(Joueur j);
        void jeu();
        void removeJoueur(Joueur* j);
        bool isGameOver();
};