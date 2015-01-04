//
//  PeserObjet.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _PeserObjet_h
#define _PeserObjet_h

#include "Commande.h"
#include "CommandeRobot.h"

class PeserObjet : public CommandeRobot{
    
public:
    PeserObjet():CommandeRobot(){}
    
    Commande* constructeurVirtuel(LireEntree* e);
    
    void execute();
    
    void undo();
};


#endif
