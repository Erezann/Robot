//
//  Saisir.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _Saisir_h
#define _Saisir_h

#include "Commande.h"
#include "Objet.h"
#include "CommandeRobot.h"

class Saisir : public CommandeRobot{
protected:
    
    Objet* objet;
    
public:
    Saisir(Objet* o):objet(o){}
    
    Commande constructeurVirtuel(LireEntree* e);
    
    Commande execute();
    
    void undo();
};

#endif
