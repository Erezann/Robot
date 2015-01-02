//
//  CommandeRobot.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _CommandeRobot_h
#define _CommandeRobot_h

#include "Commande.h"
#include "../Robot.h"
#include "../View/ElementARepresenter.h"
#include "../View/AfficheurTexte.h"
#include "../View/Afficheur.h"

class CommandeRobot : public Commande{

 public:
  CommandeRobot(){ 
    ElementARepresenter* e = new ElementARepresenter();
    Robot *r = new Robot(0,0,"S",e); 
    Afficheur* a = new AfficheurTexte(r);
    e->attacherAfficheur(a);
    
    robot=r;
  }
  
protected:
    Robot* robot;
    
};

#endif
