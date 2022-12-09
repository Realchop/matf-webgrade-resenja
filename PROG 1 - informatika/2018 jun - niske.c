#include <stdio.h>

void main() {
	char s[100], t[100];
	char karakteri[256];
	short i;
	for(i=0;i<256;++i) karakteri[i]=0;
	scanf("%s %s", s, t);
	for(i=0;t[i];++i) if(!karakteri[t[i]]) karakteri[t[i]]=1;
	int ctr = 0;
	for(i=0;karakteri[s[i]];++i) ctr++;
	printf("%d", ctr);
}
