#include <stdio.h>


typedef struct {
	char figura[10];
	int red;
	char kolona;
} SAH;

int napada(SAH *f1, SAH *f2) {
	char ime[] = f1->figura;
	if (ime == "kraljica") {
		if(
		f1->red == f2->red || 
		f1->kolona == f2->kolona || 
		((f1->kolona - 'a')+f1->red)%(f2->kolona-'a'+f2->red))
	}
	else if (ime == "konj") {
		
	}
	else if (ime == "lovac") {
		
	}
	else if (ime == "top") {
		
	}
	else return -1;
}

int main() {
	SAH f1, f2;
	scanf("%s %d %c", f1.figura, &f1.red, &f1.kolona);
	scanf("%s %d %c", f2.figura, &f2.red, &f2.kolona);
	printf("%d %d", napada(&f1, &f2), napada(&f2, &f1));
}
