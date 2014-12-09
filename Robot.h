
#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <string>
#include "Plot.h"
#include "Objet.h"
#include "Position.h"
#include "Etat/Etat.h"
#include "Etat/AVide.h"
#include "View/ElementARepresenter.h"

using namespace std;

class ElementARepresenter;

class Robot
{
  
 private:
  Position position;
  string direction;
  Plot plot;
  Objet objet;
  Etat* etat;
  ElementARepresenter* elems;
   
 public:

  //Constructeur de robot avec interface d'affichag
  Robot(int x, int y,string dir,ElementARepresenter* e);

  //déplace le robor aux coordonnées (x,y)
  void avancer(int x,int y);

  //   tourne le robot dans la direction d
  void tourner(string d);

  //le robot saisi l'objet o si il en a la possibilité
  void saisir(Objet o);

  //pose l'objet porter par le robot sur le plot si possible
  void poser();

  //renvoie le poids de l'objet porté par le robot
  int peser();

  //modifie l'état du robot pour lui faire renconter le plot p
  void rencontrerPlot(Plot p);

  //renvoie la hauteur du plot si le robot est face à un plot
  int evaluerPlot();

  //fige le robot
  void figer();

  //quitte l'état figer 
  void repartir();

  //Affiche les données élémentaires de l'état du robot
   void afficher();

};

#endif


