#include <stdio.h>
#include <math.h>

int main ()
{
    int i, j, r = 3;

    scanf("%d", &r);
    
    int x = r, y = r + 5; 

    for(i = 0; i <= 2 * x; ++i)
	{
		for(j = 0; j <= 2 * y; ++j)
			printf("%c", (fabsf(pow(x - i, 2) + 0.3 * pow(y - j, 2) - r * r) <= sqrt(r)) ? '*' : ' ');
            
        puts("");
	}

	return 0;
}