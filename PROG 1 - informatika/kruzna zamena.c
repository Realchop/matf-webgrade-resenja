#include <stdio.h>

void main() {
	int a, b, c, tmp;
	scanf("%d %d %d", &a, &b, &c);
	tmp = a;
	a = b;
	b = c;
	c = tmp;
	printf("%d %d %d", a, b, c);
}
