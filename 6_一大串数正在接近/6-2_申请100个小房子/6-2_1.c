#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a[10], i;
    for (i=0;i<=9;i++) {
		a[i] = pow(i,4);
    }
    for (i=0;i<=9;i++) {
		printf("%d %d\n", i, a[i]);
    }
	system("pause");
	return 0;
}
