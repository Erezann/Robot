//
//  Saisir.cpp
//  
//
//  Created by ZHU Yuting on 14/12/31.
//
//

#include <stdio.h>
#include "Saisir.h"

Commande* Saisir::constructeurVirtuel(LireEntree* e){
    poidsObjet = e->getInt();
    return new Saisir(poidsObjet);
}

void Saisir::execute(){
    Commande::commandeUtilisees.push(this);
    robot->saisir(poidsObjet);
}

void Saisir::undo(){
  Commande::commandeUtilisees.pop();
  robot->poser();
}
