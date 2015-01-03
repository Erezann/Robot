#include "Avancer.h"

Commande* Avancer::constructeurVirtuel(LireEntree* e){
  int orig_x = CommandeRobot::robot->getX();
  int orig_y = CommandeRobot::robot->getY();
  int new_x=e->getInt();
  int new_y=e->getInt();
  return new Avancer(new_x,new_y,orig_x,orig_y);
}

void Avancer::execute(){
  Commande::commandeUtilisees.push(this);
  CommandeRobot::robot->avancer(x,y);
}

void Avancer::undo(){
  
  Commande::commandeUtilisees.pop();
  CommandeRobot::robot->avancer(x_origin,y_origin);
}

void Avancer::undo(){
    x = x_origin;
    y = y_origin;
}
