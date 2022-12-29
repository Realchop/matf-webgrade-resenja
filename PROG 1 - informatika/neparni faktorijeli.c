#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	if(n<1){
		printf("-1");
		return;
	}
	int out = 1;
	while(n>1) {
		out *= n;
		n-=2;
	}
	printf("%d", out);
}
