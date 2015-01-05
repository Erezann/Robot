//
//  RencontrerObst.cpp
//  
//
//  Created by ZHU Yuting on 14/12/31.
//
//

#include <stdio.h>
#include "RencontrerObst.h"
#include "../Plot.h"

Commande* RencontrerObst::constructeurVirtuel(LireEntree* e){  
  return new RencontrerObst(e->getInt());
}

void RencontrerObst::execute(){
    Commande::commandeUtilisees.push(this);
    robot->rencontrerPlot(Plot(taillePlot));
}

void RencontrerObst::undo(){
  Commande::commandeUtilisees.pop();
  robot->tourner(robot->getDirection());
}
