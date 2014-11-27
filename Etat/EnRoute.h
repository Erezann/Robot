//
//  EnRoute.h
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#ifndef ____EnRoute__
#define ____EnRoute__

#include "Etat.h"
#include <iostream>
using namespace std;

class EnRoute: public Etat
{
 public:
  Etat* figer();
  string toString();
};
#endif /* defined(____EnRoute__) */
