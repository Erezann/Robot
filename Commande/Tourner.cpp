//
//  Tourner.cpp
//  
//
//  Created by ZHU Yuting on 14/12/31.
//
//

#include <stdio.h>
#include "Tourner.h"

Commande* Tourner::constructeurVirtuel(LireEntree* e){
    string origin_direction = e->getString();
    string direction = e->getString();
    return new Tourner(origin_direction, direction);
}

void Tourner::execute(){
    Commande::commandeUtilisees.push(this);
    robot->tourner(_direction);
}

void Tourner::undo(){
	Commande::commandeUtilisees.pop();
    _direction = _direction_origin;
}