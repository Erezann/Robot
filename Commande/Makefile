CC=g++
CFLAGS=-c -Wall -std=c++11
EXEC=exec

all: $(EXEC)

$(EXEC): LireEntree.o Commande.o tst_commande.o 
	$(CC) LireEntree.o Commande.o tst_commande.o -o $(EXEC)

tst_commande.o: tst_commande.cpp 
	$(CC) $(CFLAGS) tst_commande.cpp

LireEntree.o: LireEntree.cpp 
	$(CC) $(CFLAGS) LireEntree.cpp

Commande.o: Commande.cpp
	$(CC) $(CFLAGS) Commande.cpp

clean: 
	rm -rf *.o $(EXEC)
