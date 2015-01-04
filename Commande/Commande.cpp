#include "Commande.h"
//à compléter à chaque nouvelle commande
 
#include "Avancer.h"
#include "Undo.h"
#include "DefMacro.h"
#include "MacroCommande.h"

stack<Commande*> Commande::commandeUtilisees = stack<Commande*>();

//à compléter avec chaque nouvelle commande
map<string,Commande*> create_map(){
  map<string,Commande*> m;

  m["AVANCER"] = new Avancer();
  m["UNDO"] = new Undo();
  m["DEFMACRO"] = new DefMacro();
  m["APPELER"] = new MacroCommande();
  return m;
}

map<string, Commande*> Commande::commandes = create_map();

Commande* Commande::nouvelleCommande(string s, LireEntree* e){
  return (commandes[s])->constructeurVirtuel(e);
}
