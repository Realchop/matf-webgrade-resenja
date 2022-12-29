#include <stdio.h>

void main() {
	char c = getchar();
	putchar(c+((c+1)%2*2-1));
}
