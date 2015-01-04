//
//  Repartir.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _Repartir_h
#define _Repartir_h

#include "Commande.h"
#include "CommandeRobot.h"

class Repartir : public CommandeRobot{
    
public:
    Repartir():CommandeRobot(){}
    
    Commande* constructeurVirtuel(LireEntree* e);
    
    void execute();
    
    void undo();
};

#endif
