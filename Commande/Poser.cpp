//
//  PoserObst.cpp
//  
//
//  Created by ZHU Yuting on 14/12/20.
//
//

#include <stdio.h>
#include "Poser.h"

using namespace std;

Commande Poser::constructeurVirtuel(LireEntree* e){
    return new Poser();
}

Commande Poser::execute(){
    Commande::commandeUtilisees.push(this);
    robot->poser();
}

