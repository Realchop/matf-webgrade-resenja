#include <stdio.h>

void main() {
	int a, b, c, d, p=1;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(a<0) p*=a;
	if(b<0) p*=b;
	if(c<0) p*=c;
	if(d<0) p*=d;
	printf("%d", p);
}
