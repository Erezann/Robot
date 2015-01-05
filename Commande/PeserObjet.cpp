//
//  PeserObjet.cpp
//  
//
//  Created by ZHU Yuting on 14/12/31.
//
//

#include <stdio.h>
#include "PeserObjet.h"

Commande* PeserObjet::constructeurVirtuel(LireEntree* e){
    return new PeserObjet();
}

void PeserObjet::execute(){
    Commande::commandeUtilisees.push(this);
    robot->peser();
}

void PeserObjet::undo(){
  Commande::commandeUtilisees.pop();
}
