#include <stdio.h>

void main() {
	unsigned int n;
	scanf("%u", &n);
	printf("%u", n/1000*100 + n%100);
}
