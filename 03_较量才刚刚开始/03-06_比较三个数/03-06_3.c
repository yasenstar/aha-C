#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    scanf("%d", &a);
    if ( a % 7 == 0 || a % 10 == 7 )
		printf("yes");
    else
		printf("no");
	system("pause");
	return 0;
}
