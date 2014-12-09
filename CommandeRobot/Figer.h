//
//  Figer.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _Figer_h
#define _Figer_h

#include "Commande.h"
#include "CommandeRobot.h"

class Figer : public CommandeRobot{
    
public:
    
    Commande constructeurVirtuel(LireEntree e);
    
    Commande execute();
    
    void undo();
}

#endif
