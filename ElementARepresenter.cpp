#include "ElementARepresenter.h"

ElementARepresenter::ElementARepresenter():afficheurs(){}

void ElementARepresenter::attacherAfficheur(Afficheur* a){ 
  afficheurs.push_back(a); 
}

void ElementARepresenter::detacherAfficheur(Afficheur* a){
  for(std::vector<Afficheur*>::iterator it=afficheurs.begin();it!=afficheurs.end();++it){
    if(a==*it){
      afficheurs.erase(it);
      break;
    }
  }
}

void ElementARepresenter::notifier(){
  for(Afficheur* a: afficheurs){
    a->afficher();
  }
}
