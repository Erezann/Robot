//
//  EnCharge.cpp
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#include "EnCharge.h"
EnCharge* EnCharge::instance = NULL;

EnCharge* EnCharge::getInstance(){
    if (instance == NULL) {
        instance = new EnCharge();
    }
    return instance;
}

Etat* EnCharge::avancer(){
    return EnCharge::getInstance();
}

Etat* EnCharge::tourner(){
    return EnCharge::getInstance();
}

Etat* EnCharge::peser(){
    return EnCharge::getInstance();
}

Etat* EnCharge::rencontrerPlot(){
    return EnChargeFacePlot::getInstance();
}

/*Etat* EnCharge::figer(){
    return Fige::getInstance(EnCharge::getInstance());
}*/

string EnCharge::toString(){
    return "Etat: EnCharge";
}
