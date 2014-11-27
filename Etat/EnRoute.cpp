//
//  EnRoute.cpp
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#include "EnRoute.h"
#include "Fige.h"

Etat* EnRoute::figer(){
  return Fige::getInstance(this);
}

string EnRoute::toString(){
  return "Etat: En route";
}
