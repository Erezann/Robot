#ifndef _AFFICHEUR_
#define _AFFICHEUR_

#include "Robot.h"

using namespace std;

class Robot;

class Afficheur
{
 protected:
  Robot* robot;
  
 public:
  Afficheur();
  Afficheur(Robot* r);
  
  virtual ~Afficheur();

  virtual void afficher()=0;


};

#endif 

