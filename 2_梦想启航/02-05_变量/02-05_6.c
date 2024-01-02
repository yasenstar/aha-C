#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b,c,d,e,f,h,i,k;
    int g, j;
    a = 1.2; b = 2.3; c = 3.4; d = 4.5;
    e = a + b + c + d;
    printf("%f\n", e);
    f = 1.1; g = 100;
    h = f * g;
    printf("%f\n", h);
    i = 10.1; j = 10;
    k = i * (j * j);
    printf("%f\n", k);
	system("pause");
	return 0;
}
