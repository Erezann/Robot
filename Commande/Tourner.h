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

class Tourner : public CommandeRobot{
protected:
    
    String _direction;
    String _direction_origin;
    
public:
    Tourner(){}
    
    Tourner(string origin_direction, string direction) : _direction_origin(origin_direction), _direction(direction) {}
    
    Commande constructeurVirtuel(LireEntree* e);
    
    void execute();
    
    void undo();
};



#endif
