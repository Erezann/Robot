#include "MacroCommande.h"
#include "DefMacro.h"
#include <string>

#include <iostream>

Commande* MacroCommande::constructeurVirtuel(LireEntree* e){
  string s = e->getString();
  return DefMacro::appeler(s);
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
  cout<<"taille"<<list_commandes.size()<<endl;
}
