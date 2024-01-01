#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	int a;
    a = 10;
    system("color 0a");
    while (a>=0)
    {
		system("cls");
		printf("%d", a);
		Sleep(1000);
        a = a - 1;
    }
	
	system("pause");
	return 0;
}
