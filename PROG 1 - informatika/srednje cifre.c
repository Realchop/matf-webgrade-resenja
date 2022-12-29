#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	n = n > 0 ? n : -n;
	int stepen = 1;
	while(stepen<n) stepen *= 10;
	stepen /= 10;
	while(n>99) {
		n %= stepen;
		n /= 10;
		stepen /= 100;
	}
	if(n>9){
		int j = n%10;
		int d = n/10;
		printf("%.1f", (float)(j+d)/2);
	}
	else printf("%.1f", (float)n);
}
