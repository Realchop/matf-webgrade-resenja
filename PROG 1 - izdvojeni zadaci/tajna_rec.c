#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAKS_DUZINA_NISKE (255+1) /* 255 karaktera i jos 1 za terminalnu nulu */

int pogodjena_tajna_rec(char tajnaRec[], char pokusaji[])
{
    /***POCETAK KODA***/
	char slova[255];
    short i;
    for(i=0;i<255;++i) slova[i] = 0;
    i = 0;
    do slova[pokusaji[i++]]++; while(pokusaji[i]);
    char all_good = 1;
    i = 0;
    do if(!slova[tajnaRec[i++]]) { 
    	all_good = 0;
    	break;
	} while(tajnaRec[i]);
	return all_good;
    /***KRAJ KODA***/
}

int main()
{
    char tajnaRec[MAKS_DUZINA_NISKE], pokusaji[MAKS_DUZINA_NISKE];
    char formatNiska[32];
    sprintf(formatNiska, "%%%ds%%%ds", MAKS_DUZINA_NISKE-1, MAKS_DUZINA_NISKE-1);
    scanf(formatNiska, tajnaRec, pokusaji);
    printf("%d\n", pogodjena_tajna_rec(tajnaRec, pokusaji));
    return 0;
}
