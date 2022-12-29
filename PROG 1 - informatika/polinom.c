#include <stdio.h>

void main() {
	int n, m;
	scanf("%d %d", &m, &n);
	if(n<0){
		printf("-1");
		return;
	}
	int i, polinom=1;
	for(i=0;i<n;++i){
		polinom = polinom*m + 1;
	}
	printf("%d", polinom);
}
