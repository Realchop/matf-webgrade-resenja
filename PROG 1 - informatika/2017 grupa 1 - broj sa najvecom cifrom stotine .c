#include <stdio.h>
#include <math.h>

void main() {
	int n;
	scanf("%d", &n);
	if(n < 1){
		printf("-1");
		return;
	};
	char i;
	int temp, max_number, max_digit=0;
	for(i=0;i<n;++i){
		scanf("%d", &temp);
		temp = abs(temp);
		if(temp>9999 || temp<1000){
			printf("-1");
			return;
		}
		if(temp/100%10>=max_digit){
			max_digit = temp/100%10;
			max_number = temp;
		}
	}
	
	printf("%d", max_number/1000 + max_number%10 + max_digit + max_number%100/10);
}
