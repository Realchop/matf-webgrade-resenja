#include <stdio.h>

void main() {
	double h, a, b;
	scanf("%lf %lf %lf", &a, &b, &h);
	printf("%.2lf", (a+b)/2*h);
}
