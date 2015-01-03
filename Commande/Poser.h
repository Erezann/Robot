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
    Poser():CommandeRobot(){ }
    
    Commande constructeurVirtuel(LireEntree* e);
    
    void execute();
    
    void undo(){}
    
/*protected:
    
    Objet* objet;*/
    
};

#endif
