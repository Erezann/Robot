//
//  RencontrerObst.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _RencontrerObst_h
#define _RencontrerObst_h

#include "Plot.h"
#include "Commande.h"
#include "CommandeRobot.h"

class RencontrerObst : public CommandeRobot{
private:
    
    Plot plot;
    
public:
    
    Commande constructeurVirtuel(LireEntree e);
    
    Commande execute();
    
    void undo();
}


#endif
