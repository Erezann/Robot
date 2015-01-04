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
    
    string _direction_origin;
    string _direction;
    
public:
    Tourner():CommandeRobot(){}
    
    Tourner(string origin_direction, string direction) : _direction_origin(origin_direction), _direction(direction) {}
    
    Commande* constructeurVirtuel(LireEntree* e);
    
    void execute();
    
    void undo();
};



#endif
