#ifndef _PLOT_H_
#define _PLOT_H_

class Plot
{
 private :
  int hauteur;
 
 public: 
  
 Plot(int h=1): hauteur(h){}
  
  int getHauteur(){ return hauteur; }
  
};

#endif

