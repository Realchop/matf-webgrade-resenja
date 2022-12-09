#include <stdio.h>

void main() {
	int n;
	while(scanf("%d", &n)!=EOF) {
		int temp = abs(n);
		short poslednja = temp%10;
		int suma = 0;
		while(temp/=10) suma+= temp%10;
		if(poslednja > suma) printf("%d ", n);
	}
}
