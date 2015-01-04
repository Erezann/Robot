#include "MacroCommande.h"

Commande* MacroCommande::constructeurVirtuel(LireEntree* e){
  return new MacroCommande();
}

void MacroCommande::execute(){
  for(Commande* c : list_commandes){
    c->execute();
  }
}

void MacroCommande::undo(){
  for(Commande* c : list_commandes){
    c->undo();
  }
}

void MacroCommande::ajouter(Commande* c){
  list_commandes.push_back(c);
}
