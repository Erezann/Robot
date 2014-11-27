//
//  Fige.h
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#ifndef ____Fige__
#define ____Fige__

#include "Etat.h"
#include <iostream>
#include <string>
using namespace std;

class Fige: public Etat{
 private:
  static Fige* instance;              // schema singleton
  Etat* etat_avant;                   // mémoriser le dernier état
  Fige(Etat* e);//: etat_avant(e){}      // constructeur avec l'état
 public:
  static Fige* getInstance(Etat* e);  // entrer dans l'état figé
  Etat* repartir();           // changer au dernier état
  string toString();          // imprimer l'état courant
};

#endif /* defined(____Fige__) */
