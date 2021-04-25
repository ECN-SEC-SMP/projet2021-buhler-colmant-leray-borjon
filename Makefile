test.out: test.o Plateau.o Case.o CaseAchetable.o CaseFixe.o CfAllerPrison.o CfChance.o CfDepart.o CfPrison.o EmplacementConstructible.o Gare.o Joueur.o
	g++ -o test.out test.o Plateau.o Case.o CaseAchetable.o CaseFixe.o CfAllerPrison.o CfChance.o CfDepart.o CfPrison.o EmplacementConstructible.o Gare.o Joueur.o

test.o: test.cpp Plateau.h
	g++ -c test.cpp

Case.o: Case.cpp Case.h
	g++ -c Case.cpp

Joueur.o: Joueur.cpp Plateau.h Case.h
	g++ -c Joueur.cpp

CaseAchetable.o: CaseAchetable.cpp CaseAchetable.h Case.h Joueur.h
	g++ -c CaseAchetable.cpp

CaseFixe.o: CaseFixe.cpp CaseFixe.h Case.h
	g++ -c CaseFixe.cpp

CfAllerPrison.o: CfAllerPrison.cpp CaseFixe.h
	g++ -c CfAllerPrison.cpp

CfChance.o: CfChance.cpp CaseFixe.h
	g++ -c CfChance.cpp

CfDepart.o: CfDepart.cpp CaseFixe.h
	g++ -c CfDepart.cpp

CfPrison.o: CfPrison.cpp CaseFixe.h Joueur.h
	g++ -c CfPrison.cpp

EmplacementConstructible.o: EmplacementConstructible.cpp CaseAchetable.h
	g++ -c EmplacementConstructible.cpp

Gare.o: Gare.cpp CaseAchetable.h
	g++ -c Gare.cpp

Plateau.o: Plateau.cpp Joueur.h Case.h
	g++ -c Plateau.cpp


clean :
	rm *.o
	rm *.out
