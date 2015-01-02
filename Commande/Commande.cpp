#include "Commande.h"
#include "Avancer.h"

stack<Commande*> Commande::commandeUtilisees = stack<Commande*>();

//à compléter avec chaque nouvelle commande
map<string,Commande*> create_map(){
  map<string,Commande*> m;
  m["Avancer"] = new Avancer();
  return m;
}

map<string, Commande*> Commande::commandes = create_map();

Commande* Commande::nouvelleCommande(string s, LireEntree* e){
  return (commandes[s])->constructeurVirtuel(e);
}
