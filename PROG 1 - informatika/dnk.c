#include <stdio.h>
#include <string.h>

void main() {
	char a[100], b[100];
	scanf("%s %s", a, b);
	int ctr=0, i, len=strlen(a);
	for(i=0;i<len;++i){
		if(
		a[i] == 'a' && b[i] != 't' || 
		a[i] == 't' && b[i] != 'a' ||
		a[i] == 'g' && b[i] != 'c' ||
		a[i] == 'c' && b[i] != 'g'
		) ctr++;
	}
	printf("%d", ctr);
}
