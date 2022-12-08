#include <stdio.h>
#include <math.h>

typedef struct{
	char ime[20];
	char prezime[20];
	double visina;
	double masa;
} BMI;

void main() {
	int n;
	scanf("%d", &n);
	if(n<1 || n>100) {
		printf("-1");
		return;
	}
	BMI osobe[100];
	int i;
	for(i=0;i<n;++i)
		scanf("%s %s %lf %lf", &(osobe[i].ime), &(osobe[i].prezime), &(osobe[i].visina), &(osobe[i].masa));
	int kategorija;
	scanf("%d", &kategorija);
	if(kategorija < 1 || kategorija > 4){
		printf("-1");
		return;
	}
	for(i=0;i<n;++i){
		double bmi = osobe[i].masa / pow(osobe[i].visina, 2);
		switch(kategorija){
			case 1: if(bmi<18.5) printf("%s %s", osobe[i].ime, osobe[i].prezime); break;
			case 2: if(bmi>=18.5 && bmi<25) printf("%s %s", osobe[i].ime, osobe[i].prezime); break;
			case 3: if(bmi>=25 && bmi<30) printf("%s %s", osobe[i].ime, osobe[i].prezime); break;
			case 4: if(bmi>=30) printf("%s %s", osobe[i].ime, osobe[i].prezime); break;
		}
	}
	
	
	
	
	
	
	
}
