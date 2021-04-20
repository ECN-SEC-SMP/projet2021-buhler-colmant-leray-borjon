#include "Plateau.h"
#include <iostream>

int main() {
    Plateau plat = Plateau();
    plat.initPlateau();
    cout << "ok" << endl;
    plat.jeu();
}