#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10], i, t;
    for (i=0;i<=9;i++) {
		a[i] = 0;
    }
    for (i=1;i<=5;i++) {
		scanf("%d", &t);
        a[t] = 1;
    }
    for (i=0;i<=9;i++) {
		if (a[i]==0) { printf("%d ", i); }
    }
	system("pause");
	return 0;
}
