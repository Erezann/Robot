#include "Robot.h"
#include "ElementARepresenter.h"
#include "AfficheurTexte.h"

int main(){

  cout<<"Creation du robot en (3,3) qui se dirige vers le Sud."<<endl;

  ElementARepresenter* e1 = new ElementARepresenter() ; 
  Robot *r = new Robot(3,3,"S",e1);
  Afficheur* a1 = new AfficheurTexte(r);
  cout<<"test a1"<<endl;
  a1->afficher();
  cout<<"test success"<<endl;
  e1->attacherAfficheur(a1);
  cout<<"###notifier plante"<<endl;
  e1->notifier();
  cout<<"meme pas !!!"<<endl;

  cout<<"Le robot se tourne vers l'Est."<<endl;
  r->tourner("E");

  cout<<"Le robot rencontre un plot de taille 2 que l'on evalue." <<endl;
  Plot p=Plot(2);
  r->rencontrerPlot(p);
  cout<<"evaluerPlot(): "<<r->evaluerPlot()<<endl;

  cout<<"Le robot saisi un objet de poids 5."<<endl;
  Objet o=Objet(5);
  r->saisir(o);
  cout<<"poids de l'objet : "<<r->peser()<<endl;

  cout<<"Le robot se tourne vers l'ouest."<<endl;
  r->tourner("W");
  
  cout<<"Le robot se deplace en (5,6)."<<endl;
  r->avancer(5,6);

  cout<<"Le robot rencontre un plot de taille 1."<<endl;
  p=Plot();
  r->rencontrerPlot(p);

  cout<<"Le robot pose l'objet."<<endl;
  r->poser();

  cout<<"Le robot se fige."<<endl;
  r->figer();

  cout<<"Le robot repart."<<endl;
  r->repartir();

  cout<<"Le robot se tourne vers le Nord."<<endl;
  r->tourner("N");
  

  cout<<"\n\t###2eme partie \n"<<endl;
  ElementARepresenter* e2 = new ElementARepresenter();
  Robot* r2 = new  Robot(1,1,"N",e2);
  Afficheur* a2 = new AfficheurTexte(r2);
  e2->attacherAfficheur(a2);
  e2->notifier();

  cout<<"On detache l'afficheur"<<endl;
  e2->detacherAfficheur(a2);

  cout<<"On déplace le robot"<<endl;
  r2->avancer(2,2);

  cout<<"On fige le robot"<<endl;
  r2->figer();
  cout<<"Pas de notification"<<endl;

  return 0;
}
