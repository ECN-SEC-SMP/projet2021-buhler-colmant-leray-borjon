#include <iostream>
#include "Gare.h"
#include "CfDepart.h"
#include "CfPrison.h"
#include "CfAllerPrison.h"
#include "CfChance.h"
#include "EmplacementConstructible.h"
#include "Plateau.h"
#include <time.h>

using namespace std;

Plateau::Plateau() {

}

Case* Plateau::getCase(int c){
  return this->plateau[c];
}

void Plateau::initPlateau() {
    srand(time(NULL));

    // Ajout des gares
    this->plateau[5] = new Gare(5, "Gare Montparnasse");
    this->plateau[15] = new Gare(15, "Gare de Lyon");
    this->plateau[25] =  new Gare(25, "Gare du Nord");
    this->plateau[35] = new Gare(35, "Gare Saint-Lazare");

    // Ajout des cases fixes
    this->plateau[0] = new CfDepart(0, "Départ");
    this->plateau[10] = new CfPrison(10, "Prison");
    this->plateau[20] = new CfChance(20, "Case chance");
    this->plateau[30] = new CfAllerPrison(30, "Aller en prison");

    // Ajout des cases Chance
    this->plateau[2] = new CfChance(2, "Case chance");
    this->plateau[4] = new CfChance(4, "Case chance");
    this->plateau[7] = new CfChance(7, "Case chance");
    this->plateau[12] = new CfChance(12, "Case chance");
    this->plateau[17] = new CfChance(17, "Case chance");
    this->plateau[22] = new CfChance(22, "Case chance");
    this->plateau[28] = new CfChance(28, "Case chance");
    this->plateau[33] = new CfChance(33, "Case chance");
    this->plateau[36] = new CfChance(36, "Case chance");
    this->plateau[38] = new CfChance(38, "Case chance");

    // Ajout des rues  
    this->plateau[1] = new EmplacementConstructible(1, "Boulevard de Belleville",2);
    this->plateau[1]->insererBatListe(100);
    
    this->plateau[3] = new EmplacementConstructible(3, "Rue Lecourbe");
    this->plateau[6] = new EmplacementConstructible(6, "Rue de Vaugirard");
    this->plateau[8] = new EmplacementConstructible(8, "Rue de Courcelles");
    this->plateau[9] = new EmplacementConstructible(9, "Avenue de la République");
    this->plateau[11] = new EmplacementConstructible(11, "Boulevard de la Villette");
    this->plateau[13] = new EmplacementConstructible(13, "Avenue de Neuilly");
    this->plateau[14] = new EmplacementConstructible(14, "Rue de Paradis");
    this->plateau[16] = new EmplacementConstructible(16, "Avenue Mozart");
    this->plateau[18] = new EmplacementConstructible(18, "Boulevard Saint-Michel");
    this->plateau[19] = new EmplacementConstructible(19, "Place Pigalle");
    this->plateau[21] = new EmplacementConstructible(21, "Avenue Matignon");
    this->plateau[23] = new EmplacementConstructible(23, "Boulevard Malesherbes");
    this->plateau[24] = new EmplacementConstructible(24, "Avenue Henri-Martin");
    this->plateau[26] = new EmplacementConstructible(26, "Faubourg Saint-Honoré");
    this->plateau[27] = new EmplacementConstructible(27, "Place de la Bourse");
    this->plateau[29] = new EmplacementConstructible(29, "Rue Lafayette");
    this->plateau[31] = new EmplacementConstructible(31, "Avenue de Breteuil");
    this->plateau[32] = new EmplacementConstructible(32, "Avenue Foch");
    this->plateau[34] = new EmplacementConstructible(34, "Boulevard des Capucines");
    this->plateau[37] = new EmplacementConstructible(37, "Avenue des Champs-Elysées");
    this->plateau[39] = new EmplacementConstructible(39, "Rue de la Paix");

    // Initialisation des joueurs
    cout << "Combien de joueurs vont jouer ? (Minimum 2)" << endl;
    int nbJoueurs;
    string nomJoueur;
    cin >> nbJoueurs;
    cout << "Rentrez le nom des joueurs un par un : " << endl;
    for (int i = 1; i <= nbJoueurs ; i++) {
        cin >> nomJoueur;
        this->joueursActifs.push_back(Joueur(nomJoueur, i, this->plateau[0], this));
        
    }
}

// Renvoie la Case n cases plus loin que celle donnée en paramètre
Case* Plateau::avance(Case* c, int n) {
    return this->plateau[(c->getID() + n) % 39];
}

// Affiche tout le plateau ainsi que la position des joueurs
void Plateau::affichage() {
    cout <<endl;
    cout << endl;
    cout << endl;
    for (int i = 0; i < 40; i++ ) {
        if (this->plateau[i] != nullptr) {
            this->plateau[i]->affichage();
        }
    }
    cout << endl << "Position des joueurs : " << endl << endl;
    for (Joueur& j : this->joueursActifs) {
            cout << "Le joueur " << j.getNom() << " est en case [" << j.getPosition()->getID() << "] - (" << j.getPosition()->getNom() << "), fortune : " << j.getFortune() << endl;
    }
}

// int Plateau::nbGare(Joueur j) {
//     return j.nbGare();
// }

// Boucle principale du jeu
void Plateau::jeu() {
    while(!this->isGameOver()) {
        for (Joueur& j : this->joueursActifs) {
            cin.get();
            j.tourDeJeu();
            this->affichage();
        }
    }
}

// Enlève un joueur des joueurs actifs
void Plateau::removeJoueur(Joueur* j) {
    // vector<Joueur>::iterator it;
    // it = find(this->joueursActifs.begin(), this->joueursActifs.end(), j);
    // if(it != this->joueursActifs.end()) {
    //     this->joueursActifs.erase(it);
    //     this->joueursInactifs.push_back(*j);
    // } 
}


// Vérifie si la partie est finie
bool Plateau::isGameOver() {
    if (this->joueursActifs.size() <= 1) {
        return true;
    } else {
        return false;
    }
}