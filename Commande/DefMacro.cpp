#include "DefMacro.h"

map<string,MacroCommande*> DefMacro::macro_commandes = map<string,MacroCommande*>();

Commande* DefMacro::constructeurVirtuel(LireEntree* e){
  MacroCommande* macro = new MacroCommande();
  string nom = e->getString();
  Commande* commande;
  do{
    commande=e->getCommande();
    macro->ajouter(commande);
  }while(commande!=NULL);
  return new DefMacro(macro,nom);
}

void DefMacro::execute(){
  Commande::commandeUtilisees.push(this);
  macro_commandes[nom_macro]=macro;
  cout<<"Macro commande ajoutée : "<<nom_macro<<"\n"<<endl;
}

void DefMacro::undo(){
  Commande::commandeUtilisees.pop();
  macro_commandes.erase(nom_macro);
  cout<<"Macro commande enlevée : "<<nom_macro<<"\n"<<endl;
}

void DefMacro::appeler(string nom){
  macro_commandes[nom]->execute();
}
