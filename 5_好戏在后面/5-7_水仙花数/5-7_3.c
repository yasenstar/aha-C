#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int x, a, b, c;
    for (x=100;x<=999;x++) {
		a = x / 100;
        b = x / 10 % 10;
        c = x % 10;
        //if ( pow(a,3)+pow(b,3)+pow(c,3) == x ) { printf("%d ", x); }
        if ( a*a*a+b*b*b+c*c*c == x ) { printf("%d ", x); }
    }
	system("pause");
	return 0;
}
