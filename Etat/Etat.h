//
//  Etat.h
//  
//
//  Created by ZHU Yuting on 14/11/18.
//
//

#ifndef ____Etat__
#define ____Etat__

#include <iostream>
#include <string>

using namespace std;

class Etat{
public:
    // Exception
    class InvalideException{};      // lever des exceptions
    
    // Operation
    virtual Etat* figer()           { throw InvalideException(); }
    virtual Etat* rencontrerPlot()  { throw InvalideException(); }
    virtual Etat* saisir()          { throw InvalideException(); }
    virtual Etat* poser()           { throw InvalideException(); }
    virtual Etat* tourner()         { throw InvalideException(); }
    virtual Etat* repartir()        { throw InvalideException(); }
    
    virtual Etat* avancer()          { throw InvalideException(); }
    virtual Etat* evaluerPlot()       { throw InvalideException(); }
    virtual Etat* peser()             { throw InvalideException(); }
    
    virtual string toString(){ return "Etat"; }
};
#endif /* defined(____Etat__) */
