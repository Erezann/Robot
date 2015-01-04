//
//  EvaluerObst.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _EvaluerObst_h
#define _EvaluerObst_h

#include "Commande.h"
#include "CommandeRobot.h"

class EvaluerObst : public CommandeRobot{
    
public:
    EvaluerObst():CommandeRobot(){}
    
    Commande* constructeurVirtuel(LireEntree* e);
    
    void execute();
    
    void undo();
    
};


#endif
