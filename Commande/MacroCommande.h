#ifndef _MACRO_COMMANDE_
#define _MACRO_COMMANDE_

#include <string>
#include <list>
#include "Commande.h"
#include "LireEntree.h"

class MacroCommande : public Commande
{

 private:
  list<Commande*> list_commandes;

 public:
 MacroCommande(): list_commandes() {}
  Commande* constructeurVirtuel(LireEntree* e);
  void execute();
  void undo();
  void ajouter(Commande* c);
};


#endif
