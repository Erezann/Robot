#ifndef __COMMANDE_H__
#define __COMMANDE_H__

#include <stack>
#include <map>

#include "LireEntree.h"

using namespace std;

class LireEntree;

class Commande
{
 private:
  static stack<Commande> commandeUtilisee;
  static map<string,Commande> commandes;

 public:
  static Commande* nouvelleCommande(string s, LireEntree* e);
  
  virtual Commande* constructeurVirtuel(LireEntree e) = 0;
  virtual void execute() = 0;


};

#endif
