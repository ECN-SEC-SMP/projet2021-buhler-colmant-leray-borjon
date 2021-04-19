#ifndef Joueur_h
#define Joueur_h

class Joueur {
private:

    string nom;
    int id;
    int fortune = 100000;
    Case position;
    Plateau plat;
    vector<Case> vproprietes;
    
public:;
    string getNom() const;
    int getId() const;
    int getFortune() const;
    void setFortune(int fortune);

    int lanceDe();
    void addPropriete(Case newPropriete);
    void paiement(int somme, Joueur destinataire);
    void tourDeJeu();

    // constructeurs
    Joueur(string nom, int id);

    // destructeur
    ~Joueur();
};

#endif /* Joueur_h */
