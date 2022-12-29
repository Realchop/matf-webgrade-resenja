#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	if(n>100 || n < 1) {
		printf("-1");
		return;
	}
	if(n==1) {
		scanf("%d", &n);
		printf("%d", n);
		return;
	}
	int a[100], i;
	double b[100];
	for(i=0;i<n;++i) {
		scanf("%d", a+i);
	}
	for(i=0;i<n;++i) {
		if(i==0) {
			b[i] = (a[n-1] + a[0] + a[1])/3.0;
		}
		else if(i==n-1) {
			b[i] = (a[n-2] + a[n-1] + a[0])/3.0;
		}
		else 
			b[i] = (a[(i-1)%n] + a[i] + a[(i+1)%n])/3.0;
		printf("%.2lf ", b[i]);
	}
}
