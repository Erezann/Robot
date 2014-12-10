#ifndef __LIRE_ENTREE_H__
#define __LIRE_ENTREE_H__


#include <string>
#include "Commande.h"

using namespace std;

class Commande;

class LireEntree
{
 public:
  void lire();
  string getString();
  int getInt();
  Commande* getCommande();
  
};

#endif
