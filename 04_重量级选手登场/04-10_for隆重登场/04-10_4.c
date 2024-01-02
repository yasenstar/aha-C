#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    for (a=1;a<=100;a++)
    {
		if (a%7==0 || a%10==7) printf("%d ", a);
    }
	system("pause");
	return 0;
}
