#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
    a = 5;
    printf("%d\n", a);
    b=a++;
    printf("%d %d\n", a,b);
    b=++a;
    printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
