CC = cc
SRC = somme.c scal.c norme.c nbr.c multi.c debut.c 101vecteurs.c
Name = 101vecteur

all:
	$(CC) -o $(Name)  $(SRC) -lm

clean: 
	rm -f 101vecteur
