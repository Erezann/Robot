
#include "LireEntree.h"

#include <iostream>

using namespace std;

void LireEntree::lire(){
    string s="";
    Commande* m;
    while(s!="exit" || s!="stop" || s!="quit" || s!="q"){
      cin>>s;
      m=Commande::nouvelleCommande(s,this);
      m->execute();
    }
}
  
string LireEntree::getString(){
  string s;
  cin>>s;
  return s;
}

int LireEntree::getInt(){
  int i;
  cin>>i;
  return i;
}

Commande* LireEntree::getCommande(){
  return Commande::nouvelleCommande(getString(),this);
}
