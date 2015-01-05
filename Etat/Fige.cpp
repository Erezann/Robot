//
//  Fige.cpp
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#include "Fige.h"

//Fige::Fige(Etat* e): etat_avant(e){}

Fige* Fige::instance = NULL;
Etat* Fige::etat_avant = NULL;

Fige* Fige::getInstance(Etat* etat){
  if(instance == NULL){
        instance = new Fige();
    }
  etat_avant = etat;
    
  return instance;
}

Etat* Fige::repartir(){
  return etat_avant;
}

string Fige::toString(){
    return "Etat: Fige";
}
