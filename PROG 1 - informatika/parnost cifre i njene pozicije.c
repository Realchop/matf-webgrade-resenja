#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	n = n>0 ? n : -n;
	if(n>9999 || n<1000){
		printf("-1");
		return;
	} 
	int ctr = 0, i=0;
	while(n>0){
		ctr += n%10%2 == i%2;
		++i;
		n/=10;
	}
	printf("%d", ctr);
}
