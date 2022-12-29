#include <stdio.h>
#include <math.h>

void main() {
	int n;
	scanf("%d", &n);
	if(n<2){
		printf("-1");
		return;
	}
	float trenutni, prethodni, q, epsilon=0.001;
	scanf("%f %f", &prethodni, &trenutni);
	if(!trenutni){
		printf("0");
		return;
	}
	q = trenutni/prethodni;
	prethodni = trenutni;
	int i, all_good=1;
	for(i=2;i<n;++i){
		scanf("%f", &trenutni);
		if(!trenutni || fabs(q-trenutni/prethodni)>epsilon) {
			all_good = 0;
			break;
		}
		prethodni = trenutni;
	}
	printf("%d", all_good);
}
