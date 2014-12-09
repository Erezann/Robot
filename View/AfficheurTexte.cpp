
#include "AfficheurTexte.h"

AfficheurTexte::AfficheurTexte(Robot *r):Afficheur(r){}


void AfficheurTexte::afficher(){ 
  robot->afficher() ;
}


