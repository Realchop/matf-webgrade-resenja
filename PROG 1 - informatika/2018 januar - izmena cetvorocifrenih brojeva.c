#include <stdio.h>

void main() {
	int temp;
	scanf("%d", &temp);
	if(temp<1000 || temp>9999){
		printf("-1");
		return;
	}
	while(temp>999 && temp <= 9999){
		int jedinica = temp%10;
		int hiljada = temp/1000;
		if(jedinica % 2 == 0 && hiljada % 2 ==0)
			printf("%d ", temp - 1000*hiljada - jedinica + jedinica * 1000 + hiljada);
		else printf("%d ", (temp - 1000*hiljada)/10);
		scanf("%d", &temp);		
	}
	if(temp) printf("-1");
}
