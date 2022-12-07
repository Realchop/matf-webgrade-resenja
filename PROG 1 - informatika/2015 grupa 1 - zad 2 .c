#include <stdio.h>

void main() {
	char param;
	int a, b;
	scanf("%c %d %d", &param, &a, &b);
	if(a<100 || a>999 || b<100 || b>999){
		printf("-1");
		return;
	}
	if(param == 'n') printf("%d", a%10 + a/100 + b%10 + b/100);
	else if(param == 'p') printf("%d", a/10%10 + b/10%10);
	else printf("-1");
}
