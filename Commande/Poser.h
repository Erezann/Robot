//
//  Poser.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _Poser_h
#define _Poser_h

#include "Commande.h"
#include "CommandeRobot.h"

class Poser : public CommandeRobot{
    
public:
    
    Commande constructeurVirtuel(LireEntree e);
    
    Commande execute();
    
    void undo();
}

#endif
