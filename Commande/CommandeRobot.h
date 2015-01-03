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
  
protected:
    static Robot* robot;
};



#endif
