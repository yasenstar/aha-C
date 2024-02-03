#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    a = 5;
    if(a%2!=0 && a%3!=0 && a%4!=0)
		printf("是质数\n");
    else
		printf("是合数\n");
	system("pause");
	return 0;
}
