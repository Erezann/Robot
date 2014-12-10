CC=g++
CFLAGS=-c -Wall -std=c++11 
EXEC=robot
OBJ_FILES = testRobot.o  Robot.o  Etat/Fige.o  Etat/EnRoute.o  Etat/AVide.o Etat/AVideFacePlot.o Etat/EnCharge.o Etat/EnChargeFacePlot.o  Etat/Etat.o View/Afficheur.o View/ElementARepresenter.o View/AfficheurTexte.o
INCLUDES = -I Etat/ Commande/ View/

all: $(EXEC)

clean:
	rm -rf View/*.o Etat/*.o Commande/*.o *.o $(EXEC) 

$(EXEC): $(OBJ_FILES)
	$(CC) -o $(EXEC) $(OBJ_FILES)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

