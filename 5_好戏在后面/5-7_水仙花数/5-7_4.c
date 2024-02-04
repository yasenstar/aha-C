#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, a, b, c;
    printf("Please input one number (100 ~ 999): ");
    scanf("%d", &x);
    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;
    printf("you've input %d, result of digit summary is %d.\n", x, a+b+c);
	system("pause");
	return 0;
}
