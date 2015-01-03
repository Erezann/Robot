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

class Avancer : public CommandeRobot
{
    
private:
    
    int x,y;
    int x_origin, y_origin;
    
public:
    Avancer(){}
 Avancer(int x,int y,int orig_x,int orig_y): x(x),y(y),x_origin(orig_x),y_origin(orig_y){}
    Commande* constructeurVirtuel(LireEntree* e);
    void execute();
    
    void undo();
};

#endif
