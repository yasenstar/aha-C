#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	int a;
    a = 75;
    system("color 0a");
    while (a>=0)
    {
		system("cls");
        if (a%60<10)
        {
			printf("%d:0%d", a/60, a%60);
        }
        else
        {
			printf("%d:%d", a/60, a%60);
        }
		Sleep(1000);
        a = a - 1;
    }
	system("pause");
	return 0;
}
