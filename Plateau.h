#pragma once

#include <stdlib.h>

using namespace std;

class Plateau {
    private:
        Case[40] plateau;
        vector<Joueur> joueursActifs;
        vector<Joueur> joueursInactifs;

    public:
        Plateau();

        void initPlateau();
        void affichage();
        Case avance(Case case, int d);
        void finDePartie();
        int nbGares(Joueur j);
};