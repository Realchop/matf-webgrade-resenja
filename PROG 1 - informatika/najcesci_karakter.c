#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define MAKS_DUZINA_NISKE (255+1) /* 255 karaktera i jos 1 za terminalnu nulu */

int najcesci_karakter(char s[])
{
    /***POCETAK KODA***/
	char karakteri[255];
    short i, max=0, temp;
    for(i=0;i<255;++i) karakteri[i]=0;
    i = 0;
    do if((temp=++karakteri[s[i++]]) > max) max = temp; while(s[i]);
    for(i=0;i<255;++i)
    	if(karakteri[i]==max) return i;
    /***KRAJ KODA***/
}

int main()
{
    char s[MAKS_DUZINA_NISKE];
    char formatNiska[32];
    sprintf(formatNiska, "%%%ds", MAKS_DUZINA_NISKE-1);
    scanf(formatNiska, s);
    printf("%c\n", (char)najcesci_karakter(s));
    return 0;
}
