//
//  EnChargeFacePlot.h
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#ifndef ____EnChargeFacePlot__
#define ____EnChargeFacePlot__

#include "EnRoute.h"
#include "EnCharge.h"
#include "AVideFacePlot.h"
#include <iostream>
#include <string>

class EnChargeFacePlot: public EnRoute{
private:
    static EnChargeFacePlot* instance;
public:
    static EnChargeFacePlot* getInstance();
    Etat* poser();
    Etat* tourner();
    Etat* peser();
    // Etat* figer();
    string toString();
};

#endif /* defined(____EnChargeFacePlot__) */
