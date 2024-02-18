#include <stdio.h>
#include "prototype.h"

int i;
long XPCumuleChampion;

// *** Fonction CalculXPmanquant, cumule les XP du champion saisi selon le tableau 
long CalculXPmanquant ()
{
for (i = 0; i < SaisieLevelChampion ; i++)
    {
        XPCumuleChampion = XPCumuleChampion + ChampionEtoilesXP[(SaisieEtoileChampion -1)][i];
    }
return XPCumuleChampion;
}
