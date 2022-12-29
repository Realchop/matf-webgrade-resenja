#include <stdio.h>

void main() {
	int c, leve=0, desne=0, all_good=1;
	while((c=getchar())!=EOF){
		if(c=='[') leve+=1;
		if(c==']') desne+=1;
		if(desne>leve) all_good=0;
	}
	if(leve!=desne) all_good=0;
	printf("%d", all_good);
}
