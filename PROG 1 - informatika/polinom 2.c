#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &m, &n);
	if(n<0){
		printf("-1");
		return 1;
	}
	int i;
	double suma=1, fakt=1, x=1;
	for(i=1;i<=n;i++) {
		fakt *= i * 2 * (i*2-1);
		x *= m * m;
		suma += (1-(i%2)*2) * x / fakt;
	}
	printf("%.4lf", suma);
	return 0;
}
