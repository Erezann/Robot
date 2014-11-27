//
//  AVide.h
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#ifndef ____AVide__
#define ____AVide__

#include "EnRoute.h"
#include "AVideFacePlot.h"
#include "Fige.h"
#include <iostream>
#include <string>
using namespace std;

class AVide:public EnRoute
{
 private:
  static AVide* instance;
 public:
  static AVide* getInstance();
  Etat* avancer();
  Etat* tourner();
  Etat* rencontrerPlot();
  // Etat* figer();
  string toString();
};

#endif /* defined(____AVide__) */

