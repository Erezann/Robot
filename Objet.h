#ifndef _OBJET_H_
#define _OBJET_H_

class Objet
{

 private:
  int poids;
  
 public:
 Objet(int p=1):poids(p){};
  int getPoids(){ return poids; }


};


#endif
