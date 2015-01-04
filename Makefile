CC=g++
CFLAGS=-c -Wall -std=c++11 
EXEC=robot
OBJ_FILES = Robot.o  Etat/Fige.o  Etat/EnRoute.o  Etat/AVide.o Etat/AVideFacePlot.o Etat/EnCharge.o Etat/EnChargeFacePlot.o  Etat/Etat.o View/Afficheur.o View/ElementARepresenter.o View/AfficheurTexte.o Commande/Commande.o Commande/LireEntree.o Commande/CommandeRobot.o Commande/Undo.o Commande/Avancer.o Commande/MacroCommande.o Commande/DefMacro.o
INCLUDES = -I Etat/ -I Commande/ -I View/
COMMANDE=tst_commande


all: clean $(EXEC)

clean:
	rm -rf View/*.o Etat/*.o Commande/*.o *.o $(EXEC) $(COMMANDE)

$(EXEC): $(OBJ_FILES) testRobot.o
	$(CC) -o $(EXEC) $(OBJ_FILES) testRobot.o

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

commande: clean $(COMMANDE)

$(COMMANDE): $(OBJ_FILES) Commande/tst_commande.o
	$(CC) -o $(COMMANDE) $(OBJ_FILES) Commande/tst_commande.o
