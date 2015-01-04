#ifndef _DEF_MACRO_ 
#define _DEF_MACRO_

#include <iostream>
#include <string>

#include "Commande.h"
#include "LireEntree.h"
#include "MacroCommande.h"

using namespace std;

class DefMacro : public Commande
{
 private:
  static map<string,MacroCommande*> macro_commandes;
  MacroCommande* macro;
  string nom_macro;

 public:
  DefMacro(){}
 DefMacro(MacroCommande* macro_com,string nom):macro(macro_com),nom_macro(nom){}
  Commande* constructeurVirtuel(LireEntree* e);
  void execute();
  void undo();
  static Commande* appeler(string nom);
};

#endif
