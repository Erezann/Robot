//
//  Avancer.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _Avancer_h
#define _Avancer_h

#include "Commande.h"
#include "CommandeRobot.h"

class Avancer : public CommandeRobot{
    
private:
    
    int x,y;
    int x_origin, y_origin;
    
public:
    
    Commande constructeurVirtuel(LireEntree e);
    
    Commande execute();
    
    void undo();
}

#endif
