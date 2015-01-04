//
//  RencontrerObst.cpp
//  
//
//  Created by ZHU Yuting on 14/12/31.
//
//

#include <stdio.h>
#include "RencontrerObst.h"

Commande* RencontrerObst::constructeurVirtuel(LireEntree* e){
    plot = e->getInt();
    return new RencontrerObst(plot);
}

void RencontrerObst::execute(){
    Commande::commandeUtilisees.push(this);
    robot->rencontrerPlot(plot);
}

void RencontrerObst::undo(){
	Commande::commandeUtilisees.pop();
    plot = 0;
}