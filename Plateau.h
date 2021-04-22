#pragma once

#include <stdlib.h>
#include <vector>
class Joueur;

#include "Joueur.h"
#include "Gare.h"
#include "EmplacementConstructible.h"
#include "Case.h"


using namespace std;

class Plateau {
    private:
        Case* plateau[40];
        vector<Joueur> joueursActifs;
        vector<Joueur> joueursInactifs;

    public:
        Plateau();

        Case getCase(int case);

        void initPlateau();
        void affichage();
        Case* avance(Case* c, int d);
        void finDePartie();
        int nbGares(Joueur j);
        void jeu();
        void removeJoueur(Joueur* j);
        bool isGameOver();
};