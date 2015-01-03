#include "Undo.h"
#include <iostream>
using namespace std;

Commande* Undo::constructeurVirtuel(LireEntree* e){
  return new Undo();
}

void Undo::execute(){
  Commande* c=Commande::commandeUtilisees.top();
  c->undo();
}
