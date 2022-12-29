#include <stdio.h>
#include <math.h>

void main() {
	int n;
	scanf("%d", &n);
	int tmp = n > 0 ? n : -n;
	int sign = n > 0 ? 1 : -1;
	if(tmp < 1000 || tmp > 9999) {
		printf("-1");
		return;
	}
	int max = 10, stepen = 10;
	while(tmp>0){
		if(tmp%10 > fabs(n/(max/10)%10) ) max = stepen;
		stepen *= 10;
		tmp /= 10;
	}
	printf("%d", n - sign*max/10);
}
