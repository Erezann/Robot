//
//  RencontrerObst.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _RencontrerObst_h
#define _RencontrerObst_h

#include "../Plot.h"
#include "Commande.h"
#include "CommandeRobot.h"

class RencontrerObst : public CommandeRobot{
protected:
    
    int plot;
    
public:
    RencontrerObst(int p):plot(p){}
    
    Commande* constructeurVirtuel(LireEntree* e);
    
    void execute();
    
    void undo();
};


#endif
