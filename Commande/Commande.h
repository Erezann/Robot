#ifndef __COMMANDE_H__
#define __COMMANDE_H__

#include <stack>
#include <map>

#include "LireEntree.h"

using namespace std;

class LireEntree;

class Commande
{
 public:
  static stack<Commande*> commandeUtilisees;
  static map<string,Commande*> commandes;

  static Commande* nouvelleCommande(string s, LireEntree* e );
  
  virtual Commande* constructeurVirtuel(LireEntree* e) = 0;
  virtual void execute() = 0;


};

#endif
