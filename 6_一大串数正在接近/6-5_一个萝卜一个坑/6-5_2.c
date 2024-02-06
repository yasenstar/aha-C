#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10], i, j, t;
    for (i=0;i<=9;i++) {
		a[i] = 0;
    }
    for (i=1;i<=5;i++) {
		scanf("%d", &t);
        a[t]++;
    }
    for (i=0;i<=9;i++) {
		for (j=1;j<=a[i];j++)
         { printf("%d ", i); }
    }
	system("pause");
	return 0;
}
