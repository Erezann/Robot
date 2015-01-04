//
//  Fige.cpp
//  
//
//  Created by ZHU Yuting on 14/12/20.
//
//

#include <stdio.h>
#include "Figer.h"

using namespace std;

Commande* Figer::constructeurVirtuel(LireEntree* e){
    return new Figer();
    
}

void Figer::execute(){
    Commande::commandeUtilisees.push(this);
    robot->figer();
}

void Figer::undo(){
	Commande::commandeUtilisees.pop();
    robot->repartir();
}