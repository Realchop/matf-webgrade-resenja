#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	if(n<1) {
		printf("-1");
		return;
	}
	int m[100][100], i, j;
	for(i=0;i<n;++i)
		for(j=0;j<n;++j)
			scanf("%d", &m[i][j]);
	int suma = 0;
	for(i=0;i<n;++i) suma+=m[0][i];
	for(i=0;i<n;++i){
		int trenutna = 0;
		for(j=0;j<n;++j){
			trenutna += m[i][j];
		}
		if(trenutna!=suma){
			printf("0");
			return;
		}
	}
	for(i=0;i<n;++i){
		int trenutna = 0;
		for(j=0;j<n;++j){
			trenutna += m[j][i];
		}
		if(trenutna!=suma){
			printf("0");
			return;
		}
	}
	printf("%d", suma*n);
}
