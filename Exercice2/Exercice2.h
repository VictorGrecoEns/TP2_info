#ifndef Exercice2_H
#define Exercice2_H

typedef struct Eleve{
    char* nom;
    char* numero;
}Eleve;

typedef struct Carnet{
    Eleve* eleves;
    int taille;

}Carnet;

void initialise_carnet(Carnet* carnet);

#endif