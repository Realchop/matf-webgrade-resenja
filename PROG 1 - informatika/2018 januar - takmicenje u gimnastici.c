#include <stdio.h>

void main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if(n<3 || m<2){
		printf("-1");
		return;
	};
	int u[100][100];
	int i, j;
	for(i=0;i<n;++i)
		for(j=0;j<m;++j){
			scanf("%d", &u[i][j]);
			if(u[i][j]<0 || u[i][j]>10){
				printf("-1");
				return;
			};
		};
	double max_score = -1;
	for(i=0;i<n;++i){
		double trenutni_score = 0;
		for(j=0;j<m;++j)
			trenutni_score += u[i][j];
		if(trenutni_score > max_score) max_score = trenutni_score;
	}
	for(i=0;i<n;++i){
		double trenutni_score = 0;
		for(j=0;j<m;++j)
			trenutni_score += u[i][j];
		if(trenutni_score == max_score) printf("%d", i);
	}
}
