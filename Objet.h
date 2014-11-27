#ifndef _OBJET_
#define OBJET

class Objet
{

 private:
  int poids;
  
 public:
 Objet(int p=1):poids(p){};
  int getPoids(){ return poids; }


};


#endif
