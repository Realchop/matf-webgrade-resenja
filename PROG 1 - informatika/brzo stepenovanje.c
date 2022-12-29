#include <stdio.h>

int f(int osnova, int stepen) {
	int izlaz = 1, trenutni=osnova;
	while(stepen){
		if(stepen%2==1) izlaz *= trenutni;
		trenutni *= trenutni;
		stepen/=2;
	}
	return izlaz;
}

void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", f(a,b));
}
