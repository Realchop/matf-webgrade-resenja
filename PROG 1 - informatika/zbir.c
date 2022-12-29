#include <stdio.h>

int zbir(int x) {
	x = x > 0 ? x : -x;
	int poslednja = x%10;
	while(x>9) x/=10;
	return poslednja+x; 
}

void main() {
	int x;
	scanf("%d", &x);
	printf("%d", zbir(x));
}
