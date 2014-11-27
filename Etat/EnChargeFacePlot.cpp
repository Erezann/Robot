//
//  EnChargeFacePlot.cpp
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#include "EnChargeFacePlot.h"

EnChargeFacePlot* EnChargeFacePlot::instance = NULL;

EnChargeFacePlot* EnChargeFacePlot::getInstance(){
    if (instance == NULL) {
        instance = new EnChargeFacePlot();
    }
    return instance;
}

Etat* EnChargeFacePlot::poser(){
    return AVideFacePlot::getInstance();
}

Etat* EnChargeFacePlot::tourner(){
  return EnCharge::getInstance();
}

Etat* EnChargeFacePlot::peser(){
    return EnChargeFacePlot::getInstance();
}

/*Etat* EnChargeFacePlot::figer(){
    return Fige::getInstance(EnChargeFacePlot::getInstance());
}*/

string EnChargeFacePlot::toString(){
    return "Etat: EnChargeFacePlot";
}
