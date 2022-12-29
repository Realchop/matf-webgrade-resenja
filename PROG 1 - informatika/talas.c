#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	if(n<1) {
		printf("-1");
		return;
	}
	int prethodni, trenutni;
	scanf("%d", &prethodni);
	if(n==1) {
		printf("1");
		return;	
	}
	scanf("%d", &trenutni);
	if(trenutni==prethodni){
		printf("0");
		return;
	}
	int i, sve_ok=1, offset=prethodni>trenutni;
	for(i=2;i<n;++i){
		scanf("%d", &trenutni);
		if((i+offset)%2){
			if(trenutni<prethodni) {
				sve_ok = 0;
				break;
			}
		}
		else {
			if(trenutni>prethodni) {
				sve_ok = 0;
				break;
			}
		}
		prethodni = trenutni;
	}
	printf("%d", sve_ok);
}
