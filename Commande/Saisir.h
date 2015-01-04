//
//  Saisir.h
//  
//
//  Created by ZHU Yuting on 14/12/9.
//
//

#ifndef _Saisir_h
#define _Saisir_h

#include "../Objet.h"
#include "Commande.h"
#include "CommandeRobot.h"

class Saisir : public CommandeRobot{
protected:
    
    int objet;
    
public:
    Saisir(int o):objet(o){}
    
    Commande* constructeurVirtuel(LireEntree* e);
    
    void execute();
    
    void undo();
};

#endif
