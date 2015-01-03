#include "CommandeRobot.h"

Robot* create_robot(){
    ElementARepresenter* e = new ElementARepresenter();
    Robot *r = new Robot(0,0,"S",e); 
    Afficheur* a = new AfficheurTexte(r);
    e->attacherAfficheur(a);
    
    return r;  
}

Robot* CommandeRobot::robot=create_robot();
