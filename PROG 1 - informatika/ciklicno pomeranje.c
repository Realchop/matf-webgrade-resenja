#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	printf("%d", n/10 + n%10*1000);
}
