#include <stdio.h>

int main() {
	char op;
	char temp, i;
	scanf("%c", &op);
	getchar();
	if(op == 'C') {
		char suma = 0;
		for(i=0;i<5;++i){
			temp = getchar();
			if(temp>='0' && temp<='9')
				suma += temp - '0';
		}
		if(suma) printf("%d", suma);
		else printf("0");
	}
	else if(op == 'M') {
		char ctr = 0;
		for(i=0;i<5;++i) {
			temp = getchar();
			if(temp>='a' && temp<='z') ctr++;
		};
		if(ctr) printf("%d", ctr);
		else printf("o");
	}
	else printf("-1");
	return 0;
}
