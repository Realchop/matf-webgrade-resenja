#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAKS_DUZINA_NISKE (255+1) /* 255 karaktera i jos 1 za terminalnu nulu */

int jeste_rotacija(char s[], char srot[])
{
    /***POCETAK KODA***/
	char slova[255];
    int i;
    for(i=0;i<255;++i) slova[i] = 0;
    char trenutno;
    i = 0;
    do {
    	trenutno = s[i++];
    	slova[trenutno]++;
	} while(trenutno!='\0');
	i = 0;
	do {
    	trenutno = srot[i++];
    	slova[trenutno]--;
	} while(trenutno!='\0');
	for(i=0;i<255;++i){
		if(slova[i]) break;
	}
	return i == 255 ? 1 : 0;
    /***KRAJ KODA***/
}

int main()
{
    char s[MAKS_DUZINA_NISKE], srot[MAKS_DUZINA_NISKE];
    char formatNiska[32];
    sprintf(formatNiska, "%%%ds%%%ds", MAKS_DUZINA_NISKE-1, MAKS_DUZINA_NISKE-1);
    scanf(formatNiska, s, srot);
    printf("%d\n", jeste_rotacija(s, srot));
    return 0;
}
