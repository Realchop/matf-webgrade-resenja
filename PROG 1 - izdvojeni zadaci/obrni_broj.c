#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

unsigned obrni(unsigned x)
{
	unsigned out = 0;
	do out = out*10+x%10; while(x/=10);
	return out;
}

int main()
{
    unsigned x;
    scanf("%u", &x);
    if (x < 10000 || x > 99999) {
        fprintf(stderr, "Niste uneli petocifren broj!\n");
        exit(EXIT_FAILURE);
    }
    
    printf("%u\n", obrni(x));
    return 0;
}
