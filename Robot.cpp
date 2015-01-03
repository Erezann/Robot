#include "Robot.h"
#include <iostream>

Robot::Robot(int x, int y,string dir,ElementARepresenter* e) : position(x,y), direction(dir){  
  etat=AVide::getInstance();
  elems=e;
  elems->notifier();
}

void Robot::afficher(){
  cout<<"direction:"<<direction<<" x:"<<position.getx()<<" y:"<<position.gety()<<endl;
  cout<<(*etat).toString()<<"\n"<<endl;
}


void Robot::avancer(int x, int y){
  position.setx(x);
  position.sety(y);
  elems->notifier();
}

void Robot::tourner(string d){
  etat=(*etat).tourner();
  direction=d;
  elems->notifier();
}

void Robot::rencontrerPlot(Plot p){
  etat=(*etat).rencontrerPlot(); 
  plot=p;
  elems->notifier();
}

int Robot::evaluerPlot(){
  etat=(*etat).evaluerPlot();
  return plot.getHauteur();
}

void Robot::saisir(Objet o){
  etat=(*etat).saisir();
  objet=o;
  elems->notifier();
}

int Robot::peser(){
  etat->peser();
  return objet.getPoids();
}

void Robot::poser(){
  etat=etat->poser();
  elems->notifier();
}

void Robot::figer(){
  elems->notifier();
  etat=Fige::getInstance(etat);
}

void Robot::repartir(){
  etat=etat->repartir();
  elems->notifier();
}

int Robot::getX(){ 
  return position.getx(); 
}

int Robot::getY(){
  return position.gety(); 
}

