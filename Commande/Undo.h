#ifndef __UNDO__
#define __UNDO__

#include "Commande.h"

class Undo : public Commande
{
  
 public:
  Commande* constructeurVirtuel(LireEntree* e);
  void execute();

};

#endif
