#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	if(n>100 || n<1){
		printf("-1");
		return;
	}
	int niz[100], i;
	for(i=0;i<n;++i){
		scanf("%d", niz+i);
		if(i>0) niz[i] += niz[i-1];
		printf("%d", niz[i]);
	}
}
