//
//  EvaluerObstacle.cpp
//  
//
//  Created by ZHU Yuting on 14/12/20.
//
//

#include "EvaluerObst.h"

Commande EvaluerObsta::constructeurVirtuel(LireEntree* e){
    return new EvaluerObst();
}

void EvaluerObsta::execute(){
    Commande::commandeUtilisees.push(this);
    robot->evaluerPlot();
}

