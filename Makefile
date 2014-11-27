CC=g++
CFLAGS=-c -Wall -std=c++11 
EXEC=robot
OBJ_FILES = testRobot.o  Robot.o  Etat/Fige.o  Etat/EnRoute.o  Etat/AVide.o Etat/AVideFacePlot.o Etat/EnCharge.o Etat/EnChargeFacePlot.o  Etat/Etat.o Afficheur.o ElementARepresenter.o AfficheurTexte.o
INCLUDES = -I Etat/

all: $(EXEC)

clean:
	rm -rf Etat/*.o *.o $(EXEC) 

$(EXEC): $(OBJ_FILES)
	$(CC) -o $(EXEC) $(OBJ_FILES)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

