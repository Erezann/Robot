//
//  Repartir.cpp
//  
//
//  Created by ZHU Yuting on 14/12/31.
//
//

#include <stdio.h>
#include "Repartir.h"

Commande* Repartir::constructeurVirtuel(LireEntree* e){
    return new Repartir();
}

void Repartir::execute(){
    Commande::commandeUtilisees.push(this);
    robot->repartir();
}

void Repartir::undo(){
	Commande::commandeUtilisees.pop();
}