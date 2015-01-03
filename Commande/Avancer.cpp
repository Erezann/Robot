#include "Avancer.h"

Commande* Avancer::constructeurVirtuel(LireEntree* e){
  int orig_x = robot->getX();
  int orig_y = robot->getY();
  int new_x=e->getInt();
  int new_y=e->getInt();
  return new Avancer(new_x,new_y,orig_x,orig_y);
}

void Avancer::execute(){
  Commande::commandeUtilisees.push(this);
  robot->avancer(x,y);
}
