#include <stdio.h>

int konverzija(char x) {
	return x%10;
}

void main() {
	int c=0;
	while((c=getchar())!=EOF) {
		printf("%d", konverzija(c));
	}
}
