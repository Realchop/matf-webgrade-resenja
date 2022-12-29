#include <stdio.h>

void main() {
	char a, b, c, d, e;
	int suma = 0;
	scanf("%c %c %c %c %c", &a, &b, &c, &d, &e);
	if(a>='0' && a<='9') suma += a;
	if(b>='0' && b<='9') suma += b;
	if(c>='0' && c<='9') suma += c;
	if(d>='0' && d<='9') suma += d;
	if(e>='0' && e<='9') suma += e;
	printf("%d", suma);
}
