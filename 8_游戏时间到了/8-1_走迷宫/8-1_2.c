#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // required by Sleep()
int main()
{
	// ����ѭ������
    int i;
    
    // ����С���ʼ����(x,y)���Թ���������(p,q)
    int x, y, p, q;
    
    // �����������ķ��������
    char ch;
    
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
    
    // ��ȡ���������
    ch = getch();
    
    // ���ݶ���ķ��������Ӧ����
    // ����
    if (ch=='s') {
		if (a[x+1][y]!='#') {
			a[x][y]=' ';
            x++;
            a[x][y]='O';
        }
    }
    // ����
    // ����
    // ����
    
    // �����Ļ������������µ��Թ�
    system("cls");
    for (i=0;i<=5;i++) { puts(a[i]); }
    
	// system("pause");
    Sleep(5000);
	return 0;
}
