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
    objet = e->getInt();
    return new Saisir(objet);
}

void Saisir::execute(){
    Commande::commandeUtilisees.push(this);
    robot->saisir(objet);
}

void Saisir::undo(){
	Commande::commandeUtilisees.pop();
    objet = 0;
}