#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	if(n<1) {
		printf("-1");
		return;
	}
	double suma = 0;
	int i;
	for(i=1;i<=n;++i){
		suma += 1.0/i;
	}
	printf("%.3lf", n/suma);
}
