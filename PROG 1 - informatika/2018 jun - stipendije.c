#include <stdio.h>

typedef struct {
	char ime[20];
	char prezime[20];
	double prosek;
	unsigned godina;
} Student;

void main() {
	int n;
	scanf("%d", &n);
	if(n<1 || n>100){
		printf("-1");
		return;
	}
	short i, ctr=0;
	for(i=0;i<n;++i){
		Student s;
		scanf("%s %s %lf %d", &s.ime, &s.prezime, &s.prosek, &s.godina);
		if(s.godina == 4 && s.prosek > 9) ctr++;
	}
	printf("%d", ctr);
}
