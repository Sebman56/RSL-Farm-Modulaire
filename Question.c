
#include <stdio.h>
//#include <stdlib.h>
#include "prototype.h"

int SaisieEtoileChampion;
int SaisieLevelChampion;

long XPMaxChampion;

/* *** Fonction question *** */
long Question()
{
    printf("\n\t Entrez le nombre d'étoile du champion: ");
    scanf ("%i",&SaisieEtoileChampion);
    // printf("\t Nombre d'étoile du champion: %i",SaisieEtoileChampion);

    printf("\n\t Entrez le level du champion: ");
    scanf ("%i",&SaisieLevelChampion);
    // printf("\t Level du champion: %i",SaisieLevelChampion);

    switch (SaisieEtoileChampion)
        {
        case 1 : XPMaxChampion = 22761; break;
        case 2 : XPMaxChampion = 81326; break;
        case 3 : XPMaxChampion = 200681; break;
        case 4 : XPMaxChampion = 449082; break;
        case 5 : XPMaxChampion = 963806; break;
        case 6 : XPMaxChampion = 2010669; break;     
        default : { printf("\n\n\t  ****** Erreur de saisie. *****"); return 0;} 
        }   
        //printf ("\n\t*** Fin Question () **** *************************************************************\n");
return 0;
}
