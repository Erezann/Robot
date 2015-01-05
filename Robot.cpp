#include "Robot.h"
#include <iostream>

Robot::Robot(int x, int y,string dir,ElementARepresenter* e) : position(x,y), direction(dir){  
  etat=AVide::getInstance();
  elems=e;
  elems->notifier();
}

void Robot::afficher(){
  cout<<"Direction : "<<direction<<endl;
  cout<<"Coordonnées : ("<<position.getx()<<","<<position.gety()<<")"<<endl;
  cout<<(*etat).toString()<<"\n"<<endl;
}


void Robot::avancer(int x, int y){
  cout<<"J'avance en ("<<x<<","<<y<<")."<<endl;
  position.setx(x);
  position.sety(y);
  elems->notifier();
}

void Robot::tourner(string d){
  cout<<"Je me tourne vers "<<d<<"."<<endl;
  etat=(*etat).tourner();
  direction=d;
  elems->notifier();
}

void Robot::rencontrerPlot(Plot p){
  cout<<"Je rencontre un plot."<<endl;
  etat=(*etat).rencontrerPlot(); 
  plot=p;
  elems->notifier();
}

int Robot::evaluerPlot(){
  cout<<"J'évalue la hauteur de plot."<<endl;
  etat=(*etat).evaluerPlot();
  cout<<"Le plot a une taille de "<<plot.getHauteur()<<".\n"<<endl;
  return plot.getHauteur();
}

void Robot::saisir(Objet o){
  cout<<"Je saisie l'objet."<<endl;
  etat=(*etat).saisir();
  objet=o;
  elems->notifier();
}

int Robot::peser(){
  cout<<"Je pèse l'objet"<<endl;
  etat->peser();
  cout<<"L'objet pèse "<< objet.getPoids() <<".\n"<<endl;
  return objet.getPoids();
}

void Robot::poser(){
  cout<<"Je pose l'objet."<<endl;
  etat=etat->poser();
  elems->notifier();
}

void Robot::figer(){
  cout<<"Je me fige."<<endl;
  elems->notifier();
  etat=Fige::getInstance(etat);
}

void Robot::repartir(){
  cout<<"Je repars."<<endl;
  etat=etat->repartir();
  elems->notifier();
}

int Robot::getX(){ 
  return position.getx(); 
}

int Robot::getY(){
  return position.gety(); 
}

string Robot::getDirection(){
  return direction;
}
