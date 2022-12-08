#include <stdio.h>
#include <stdlib.h>

unsigned povrsina_pravougaonika(int x1, int y1, int x2, int y2)
{
    /***POCETAK KODA***/
	int leva_x = x1 < x2 ? x1 : x2;
	int niza_y = y1 < y2 ? y1 : y2;
	int desna_x = x1 > x2 ? x1 : x2;
	int visa_y = y1 > y2 ? y1 : y2;
	unsigned a = desna_x - leva_x;
	unsigned b = visa_y - niza_y; 
	return a*b;
    /***KRAJ KODA***/
}

int main()
{
    int x1; 
    int y1; 
    int x2;
    int y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    printf("%u\n", povrsina_pravougaonika(x1, y1, x2, y2));
    return 0;
}
