//
//  AVide.cpp
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#include "AVide.h"

AVide* AVide::instance = NULL;

AVide* AVide::getInstance(){
    if (instance == NULL) {
        instance = new AVide();
    }
    return instance;
}

Etat* AVide::avancer() {
    return AVide::getInstance();
}

Etat* AVide::tourner(){
    return AVide::getInstance();
}

Etat* AVide::rencontrerPlot(){
    return AVideFacePlot::getInstance();
}

/*Etat* AVide::figer(){
    return Fige::getInstance(AVide::getInstance());
}*/

string AVide::toString(){
    return "Etat: Avide";
}
