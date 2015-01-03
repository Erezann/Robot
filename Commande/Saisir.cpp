//
//  Saisir.cpp
//  
//
//  Created by ZHU Yuting on 14/12/31.
//
//

#include <stdio.h>
#include "Saisir.h"

Commande Saisir::constructeurVirtuel(LireEntree* e){
    Objet* obj = new Objet(e->getInt());
    return new Saisir(obj);
}

Commande Saisir::execute(){
    Commande::commandeUtilisees.push(this);
    robot->saisir(objet);
}

void Saisir::undo(){
    objet = NULL;
}