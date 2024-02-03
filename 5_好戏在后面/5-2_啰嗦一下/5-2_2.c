#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
    a = 2;
    printf("a=%d\n",a);
    b = a++;
    printf("a=%d, b=%d\n",a,b);
    a = 2;
    printf("a=%d\n",a);
    b = ++a;
    printf("a=%d, b=%d\n",a,b);
	system("pause");
	return 0;
}
