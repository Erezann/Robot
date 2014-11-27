#ifndef _ELEMENT_A_REPRESENTER_
#define _ELEMENT_A_REPRESENTER_

#include <vector>
#include "Afficheur.h"
#include "Robot.h"

using namespace std;

class Afficheur;

class ElementARepresenter
{
 private:
  vector<Afficheur*> afficheurs;
 
 public:
  ElementARepresenter();

  void attacherAfficheur(Afficheur* a);
  void detacherAfficheur(Afficheur* a);
  void notifier();


};

#endif


