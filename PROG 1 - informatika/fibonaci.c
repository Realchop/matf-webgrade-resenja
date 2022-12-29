#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	if(n<1){
		printf("-1");
		return;
	}
	printf("0");
	if(n==1) return;
	printf("1");
	int prethodni=0, trenutni=1, i;
	for(i=2;i<n;++i){
		trenutni += prethodni;
		prethodni = trenutni - prethodni;
		printf("%d", trenutni);
	}
}
