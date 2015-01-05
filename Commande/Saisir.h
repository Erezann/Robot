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
    
    int poidsObjet;
    
public:
    Saisir(){}
    Saisir(int poids):poidsObjet(poids){}
    
    Commande* constructeurVirtuel(LireEntree* e);
    
    void execute();
    
    void undo();
};

#endif
