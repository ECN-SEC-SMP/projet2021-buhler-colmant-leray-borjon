#ifndef joueur_h
#define joueur_h

class joueur {
private:
    id, nom, cases, fortune
    paiement()
    tourDeJeu()
    bool ib;
    int numero;

protected:
    float solde;
    
public:
    float getSolde();
    int getNumero();

    void crediter(float montant);
    bool debiter(float montant);

    // constructeurs
    joueur(int numero);

    // destructeur
    ~joueur();
};

#endif /* joueur_h */
