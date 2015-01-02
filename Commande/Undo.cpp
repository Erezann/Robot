#include "Undo.h"

Commande* Undo::constructeurVirtuel(LireEntree e){
  return new Undo();
}

void Undo::execute(){
  Commande* c=commandeUtilisee.pop();
  c->undo();
}
