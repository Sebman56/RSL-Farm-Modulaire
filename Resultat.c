#include <stdio.h>
//#include <stdlib.h>
#include "prototype.h"

// *** Fonction ResultatFarm (), affichage finale  
long ResultatFarm ()
{
    printf (" \n\t\t\t\t\t **** Resultat Farm ***.\n");
    printf("\n\t Nécéssite %li Energies pour faire %i rounds Araignee-20 (%i XP) pour atteindre  %li XP, maximum d'un champion %i étoiles.\n",EnergieManquanteAraignee20, NRoundAraignee20,Araignee20, XPManquantChampion, SaisieEtoileChampion);   
    printf("\n\t Nécéssite %li Energies pour faire %i rounds Dragon-20 (%i XP) pour atteindre  %li XP, maximum d'un champion %i étoiles.\n",EnergieManquanteDragon20, NRoundDragon20,Dragon20, XPManquantChampion, SaisieEtoileChampion);   
    printf("\n\t Nécéssite %li Energies pour faire %i rounds Campagne 12-6 (%i XP) pour atteindre  %li XP, maximum d'un champion %i étoiles.\n",EnergieManquanteCampagne12_6, NRoundCampagneBrutale12_6,CampagneBrutale12_6, XPManquantChampion, SaisieEtoileChampion);
      
    return 0;
}
