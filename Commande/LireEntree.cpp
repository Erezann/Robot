
#include "LireEntree.h"
#include "../Etat/Etat.h"

#include <iostream>

using namespace std;

void LireEntree::lire(){
    string s="";
    Commande* m;
    while(true){
      cin>>s;
      if(s=="exit" || s=="stop" || s=="quit" || s=="q"|| s=="STOP" || s=="EXIT"){
	break;
      }
      
      m=Commande::nouvelleCommande(s,this);
      if(m==NULL) 
	cout<<"Cette commande n'existe pas, veuillez taper une commande convenable."<<endl;  
      else{
	try
	  {
	    m->execute();
	  }
	catch( const Etat::InvalideException & e){
	  std::cerr<<"Impossible d'effectuer cette action dans cet Etat"<<endl;
	}
      }
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
  string s;
  cin>>s;
  if(s=="FINMACRO"){
    return NULL;
  }
  return Commande::nouvelleCommande(s,this);
}
