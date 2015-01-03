#include "Commande.h"
//à compléter à chaque nouvelle commande
 
#include "Avancer.h"
#include "Undo.h"


stack<Commande*> Commande::commandeUtilisees = stack<Commande*>();

//à compléter avec chaque nouvelle commande
map<string,Commande*> create_map(){
  map<string,Commande*> m;

  m["Avancer"] = new Avancer();
  m["Undo"] = new Undo();
  return m;
}

map<string, Commande*> Commande::commandes = create_map();

Commande* Commande::nouvelleCommande(string s, LireEntree* e){
  return (commandes[s])->constructeurVirtuel(e);
}
