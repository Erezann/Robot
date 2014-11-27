//
//  EnCharge.h
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#ifndef ____EnCharge__
#define ____EnCharge__

#include "EnRoute.h"
#include "EnChargeFacePlot.h"
#include "Fige.h"
#include <iostream>
#include <string>
using namespace std;

class EnCharge: public EnRoute{
private:
    static EnCharge* instance;
public:
    static EnCharge* getInstance();
    Etat* avancer();
    Etat* peser();
    Etat* rencontrerPlot();
    Etat* tourner();
    // Etat* figer();
    string toString();
};

#endif /* defined(____EnCharge__) */
