//
//  AVideFacePlot.h
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#ifndef ____AVideFacePlot__
#define ____AVideFacePlot__

#include "EnRoute.h"
#include "EnChargeFacePlot.h"
#include "AVide.h"
#include "Fige.h"
#include <iostream>
#include <string>
using namespace std;

class AVideFacePlot: public EnRoute{
private:
    static AVideFacePlot* instance;
    
public:
    static AVideFacePlot* getInstance();
    Etat* evaluerPlot();
    Etat* tourner();
    Etat* saisir();
    // Etat* figer();
    string toString();
};
#endif /* defined(____AVideFacePlot__) */
