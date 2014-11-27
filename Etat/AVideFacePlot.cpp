//
//  AVideFacePlot.cpp
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#include "AVideFacePlot.h"

AVideFacePlot* AVideFacePlot::instance = NULL;

AVideFacePlot* AVideFacePlot::getInstance(){
    if (instance == NULL) {
        instance = new AVideFacePlot();
    }
    return instance;
}

Etat* AVideFacePlot::evaluerPlot(){
    return AVideFacePlot::getInstance();
}

Etat* AVideFacePlot::tourner(){
    return AVide::getInstance();
}

Etat* AVideFacePlot::saisir(){
    return EnChargeFacePlot::getInstance();
}

/*Etat* AVideFacePlot::figer(){
    return Fige::getInstance(AVideFacePlot::getInstance());
}*/
string AVideFacePlot::toString(){
    return "Etat: AVideFacePlot";
}
