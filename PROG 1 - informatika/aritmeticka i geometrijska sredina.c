#include <stdio.h>
#include <math.h>

void main() {
	int n;
	scanf("%d", &n);
	if(n<2 || n>100) {
		printf("-1");
		return;
	}
	int niz[100], i;
	double ar=0, geom=0, a=0, g=0;
	for(i=0;i<n;++i){
		scanf("%d", niz+i);
		if(i%2==0){
			ar += niz[i];
			a++;
		}
		else {
			geom += niz[i]*niz[i];
			g++;
		}
	}
	printf("%.2lf", ar/a + sqrt(geom/g));
}
