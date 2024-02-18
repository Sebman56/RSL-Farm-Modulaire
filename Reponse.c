#include <stdio.h>
//#include <stdlib.h>
#include "prototype.h"

//long XPCumuleChampion;
long XPManquantChampion;
int NRoundAraignee20;
int NRoundDragon20;
int NRoundCampagneBrutale12_6;

long EnergieManquanteAraignee20;
long EnergieManquanteDragon20;
//long NRoundManquant12_3;
long EnergieManquanteCampagne12_6;
long XPChampion;

long Reponse()
{
    printf (" \n\t\t\t\t\t *** Récapitulatif ***.\n");
    
    XPChampion = ChampionEtoilesXP[(SaisieEtoileChampion -1)][(SaisieLevelChampion -1)];
    printf("\n\t %li XP du (%i étoiles) au (Level %i).\n",XPChampion,SaisieEtoileChampion, SaisieLevelChampion);

    XPManquantChampion =XPMaxChampion -XPCumuleChampion;

    NRoundAraignee20= XPManquantChampion / Araignee20;    //NombreRound = 
        EnergieManquanteAraignee20= NRoundAraignee20 * 16;
    
    NRoundDragon20= XPManquantChampion / Dragon20;
        EnergieManquanteDragon20= NRoundDragon20 * 16;

    NRoundCampagneBrutale12_6  = XPManquantChampion / CampagneBrutale12_6;
       EnergieManquanteCampagne12_6 = NRoundCampagneBrutale12_6 *8;
  //NRoundManquant12_3 = XPManquantChampion / 8;
    printf("\n\t*** %li *** XP cumulés du Champion.\n", XPCumuleChampion);
    //printf("\n\tXP du (%i étoiles) au (Level %i) : %i\n",SaisieEtoileChampion, SaisieLevelChampion,XPChampion);
    printf("\n\tXP Maximum du %i étoiles : %li\n",SaisieEtoileChampion,XPMaxChampion);
    printf("\n\tXP manquant du champion (%i étoiles) : %li\n",SaisieEtoileChampion,XPManquantChampion);    
    //printf (" \n\t\t\t\t\t **** Fin Reponse ***.\n\n");
    return 0;
}