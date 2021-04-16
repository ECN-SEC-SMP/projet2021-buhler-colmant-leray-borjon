#include <iostream>
#include "Case.h"
#include "CaseAchetable.h"



CaseAchetable::CaseAchetable(){
  this->proprio = NULL;

}

void acheter(Joueur j){
  j.cases+= j.ID;
}
