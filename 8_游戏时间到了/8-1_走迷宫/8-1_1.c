#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // required by Sleep()
int main()
{
	int i;
    
    // ����С���ʼ����(x,y)���Թ���������(p,q)
    int x, y, p, q;
    
    // ��ʼ���ַ��Թ�
    char a[50][50] = {
		"######",
        "#O #  ",
        "#  # #",
        "##   #",
        "######"
    };
    
    // ����С���ʼ������Թ���������
    x=1; y=1; p=1; q=5;
    
    // ����Ļ�������ʼ�����Թ�
    for (i=0;i<=5;i++) { puts(a[i]); }
    
	// system("pause");
    Sleep(5000);
	return 0;
}
