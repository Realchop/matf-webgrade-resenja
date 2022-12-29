#include <stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	if(n<1 || n>100){
		printf("-1");
		return;
	}
	int i, j;
	for(i=1;i<=n;++i){
		printf("~");
		for(j=0;j<i;++j){
			printf("%d", (i-j)%2);
		}
		printf("~\n");
	}
	
}
