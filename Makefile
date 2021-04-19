tp_note.out: banc_test.o Joueur.o
	g++ -o tp7.out banc_test.o Joueur.o

banc_test.o: banc_test.cpp Joueur.h
	g++ -c banc_test.cpp

Joueur.o: Joueur.cpp Joueur.h Case.h Plateau.h CaseAchetable.h
	g++ -c Joueur.cpp