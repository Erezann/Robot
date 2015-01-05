#include "Commande.h"
//à compléter à chaque nouvelle commande
 
#include "Avancer.h"
#include "Tourner.h"
#include "Saisir.h"
#include "Poser.h"
#include "PeserObjet.h"
#include "RencontrerObst.h"
#include "EvaluerObst.h"
#include "Figer.h"
#include "Repartir.h"
#include "Undo.h"
#include "DefMacro.h"
#include "MacroCommande.h"

stack<Commande*> Commande::commandeUtilisees = stack<Commande*>();

//à compléter avec chaque nouvelle commande
map<string,Commande*> create_map() {
map<string,Commande*> m;

m["AVANCER"] = new Avancer();
m["TOURNER"] = new Tourner();
m["SAISIR"] = new Saisir();
m["POSER"] = new Poser();
m["PESEROBJET"] = new PeserObjet();
m["RENCONTREROBST"] = new RencontrerObst();
m["EVALUEROBST"] = new EvaluerObst();
m["FIGER"] =  new Figer();
m["REPARTIR"] = new Repartir();
m["UNDO"] = new Undo();
m["DEFMACRO"] = new DefMacro();
m["APPELER"] = new MacroCommande();
return m;
}

map<string, Commande*> Commande::commandes = create_map();

Commande* Commande::nouvelleCommande(string s, LireEntree* e){
  return (commandes[s])->constructeurVirtuel(e);
}
