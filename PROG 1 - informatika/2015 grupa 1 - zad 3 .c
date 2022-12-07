#include <stdio.h>
#include <math.h>

void main() {
	int broj, i;
	scanf("%d %d", &broj, &i);
	if(broj<0 || i<1){
		printf("-1");
		return;
	}
	int stepen = pow(10, i);
	printf("%d", broj/stepen*stepen/10 + broj%(stepen/10));
}
