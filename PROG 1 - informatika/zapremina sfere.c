#include <stdio.h> 
#include <math.h>

void main(){
	double r;
	scanf("%lf", &r);
	printf("%.3lf", pow(r,3)*M_PI*4/3);
}
