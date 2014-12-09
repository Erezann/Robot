//
//  Tourner.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _Tourner_h
#define _Tourner_h

#include "Commande.h"
#include "CommandeRobot.h"
#include <string>

class Repartir : public CommandeRobot{
private:
    
    String direction;
    String direction_origin;
    
public:
    
    Commande constructeurVirtuel(LireEntree e);
    
    Commande execute();
    
    void undo();
}



#endif
