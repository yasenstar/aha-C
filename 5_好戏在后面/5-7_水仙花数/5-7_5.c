#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, a1, a2, a3, a4, a5, a6, a7, a8;
    printf("Please input one number (1 ~ 99999999): ");
    scanf("%d", &x);
    a1 = x / 10000000;
    a2 = x / 1000000 % 10;
    a3 = x / 100000 % 10;
    a4 = x / 10000 % 10;
    a5 = x / 1000 % 10;
    a6 = x / 100 % 10;
    a7 = x / 10 % 10;
    a8 = x % 10;
    printf("you've input %d, every digit is %d,%d,%d,%d,%d,%d,%d,%d, result of digit summary is %d.\n", x, a1, a2, a3, a4, a5, a6, a7, a8, a1+a2+a3+a4+a5+a6+a7+a8);
	system("pause");
	return 0;
}
