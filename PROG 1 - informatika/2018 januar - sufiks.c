#include <stdio.h>
#include <string.h>

void main() {
	char s1[30], s2[30];
	scanf("%s %s", s1, s2);
	if(strlen(s1) == strlen(s2)){
		printf("-1");
		return;
	}
	if(strlen(s2) > strlen(s1)) {
		char temp[30];
		strcpy(temp , s2);
		strcpy(s2 , s1);
		strcpy(s1 , temp);
	}
	int len1 = strlen(s1), len2 = strlen(s2), i;
	for(i=0;i<len2;++i)
		if(s1[len1-i]!=s2[len2-i]) break;
	if(i!=len2) printf("-1");
	else printf("%d", len1-i);
}
