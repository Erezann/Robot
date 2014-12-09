#ifndef _AFFICHEUR_TEXTE_
#define _AFFICHEUR_TEXTE_

#include "../Robot.h"

class AfficheurTexte : public Afficheur
{
 public:
  AfficheurTexte(Robot* r);

  void afficher();
};

#endif
