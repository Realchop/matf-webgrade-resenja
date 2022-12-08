#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct
{
    int dan;
    int mesec;
    int godina;
} Datum;

Datum sledeci_dan(Datum d)
{
    /***POCETAK KODA***/
	d.dan += 1;
	switch(d.mesec) {
		case 1: ;
		case 5: ;
		case 3: ;
		case 7: ;
		case 8: if(d.dan>31){
			d.dan = 1;
			d.mesec += 1;
		} break;
		case 4: ;
		case 6: ;
		case 9: ;
		case 11: if(d.dan>30){
			d.dan = 1;
			d.mesec += 1;
		} break;
		case 12: if(d.dan>31){
			d.dan = 1;
			d.mesec = 1;
			d.godina += 1;
		} break;
		case 2: if(d.godina / 4 == 0 && d.godina / 100 == 0 && d.godina % 400 != 0) {
			if(d.dan > 29){
				d.dan = 1;
				d.mesec += 1;
			}
		}
		else {
			if(d.dan > 29){
				d.dan = 1;
				d.mesec += 1;
			}
		}
		break;
		}
	return d;

    /***KRAJ KODA***/
}

int main()
{
    Datum d;
    scanf("%d%d%d", &d.dan, &d.mesec, &d.godina);
    Datum rezultat = sledeci_dan(d);
    printf("%d.%d.%d.\n", rezultat.dan, rezultat.mesec, rezultat.godina);
    return 0;
}
