#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	n = n > 0 ? n : -n;
	int p=0, tmp=n;
	while(n>0){
		p = p*10 + n%10;
		n/=10;
	}
	printf("%d", p==tmp);
}
