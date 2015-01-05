//
//  EvaluerObstacle.cpp
//  
//
//  Created by ZHU Yuting on 14/12/20.
//
//

#include "EvaluerObst.h"
#include "iostream"

Commande* EvaluerObst::constructeurVirtuel(LireEntree* e){
    return new EvaluerObst();
}

void EvaluerObst::execute(){
    Commande::commandeUtilisees.push(this);
    robot->evaluerPlot();
}

void EvaluerObst::undo(){
  Commande::commandeUtilisees.pop();
}
