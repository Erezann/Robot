CC=g++
CFLAGS=-c -Wall -std=c++11 
EXEC=robot
OBJ_FILES = testRobot.o  Robot.o  Etat/Fige.o  Etat/EnRoute.o  Etat/AVide.o Etat/AVideFacePlot.o Etat/EnCharge.o Etat/EnChargeFacePlot.o  Etat/Etat.o View/Afficheur.o View/ElementARepresenter.o View/AfficheurTexte.o Commande/Avancer.o Commande/Commande.o Commande/LireEntree.o 
INCLUDES = -I Etat/ -I Commande/ -I View/
COMMANDES_FILES = Commande/tst_commande.o  Robot.o  Etat/Fige.o  Etat/EnRoute.o  Etat/AVide.o Etat/AVideFacePlot.o Etat/EnCharge.o Etat/EnChargeFacePlot.o  Etat/Etat.o View/Afficheur.o View/ElementARepresenter.o View/AfficheurTexte.o Commande/Avancer.o Commande/Commande.o Commande/LireEntree.o
COMMANDE=tst_commande
INCLUDES = -I Etat/ -I Commande/ -I View/

all: clean $(EXEC)

clean:
	rm -rf View/*.o Etat/*.o Commande/*.o *.o $(EXEC) $(COMMANDE)

$(EXEC): $(OBJ_FILES)
	$(CC) -o $(EXEC) $(OBJ_FILES)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

commande: clean $(COMMANDE)

$(COMMANDE): $(COMMANDES_FILES)
	$(CC) -o $(COMMANDE) $(COMMANDES_FILES)
