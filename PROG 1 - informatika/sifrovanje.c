#include <stdio.h>

void main() {
	char niska[60];
	gets(niska);
	int i;
	for(i=0;niska[i] != '\0'; ++i) {
		if((niska[i]>='A' && niska[i]<='Z') || (niska[i]>='a' && niska[i]<='z')){
			int tmp = niska[i];
			while(tmp>9) {
				tmp = tmp/10 + tmp%10;
			}
			niska[i] = '0' + tmp;
		}
		else if(niska[i] <= '9' && niska[i] >= '0') {
			niska[i] = 'a' + niska[i] - '0';
		}
	}
	puts(niska);
}
