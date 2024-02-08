#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // required by Sleep()
int main()
{
	// 定义循环变量
    int i;
    
    // 定义小球初始坐标(x,y)，迷宫出口坐标(p,q)
    int x, y, p, q;
    
    // 定义键盘输入的方向键变量
    char ch;
    
    // 初始化字符迷宫
    char a[50][50] = {
		"######",
        "#O #  ",
        "#  # #",
        "##   #",
        "######"
    };
    
    // 给出小球初始坐标和迷宫出口坐标
    x=1; y=1; p=1; q=5;
    
    // 在屏幕上输出初始化的迷宫
    for (i=0;i<=5;i++) { puts(a[i]); }
    
    // 读取方向键输入
    ch = getch();
    
    // 根据读入的方向进行相应处理
    // 向下
    if (ch=='s') {
		if (a[x+1][y]!='#') {
			a[x][y]=' ';
            x++;
            a[x][y]='O';
        }
    }
    // 向上
    // 向右
    // 向左
    
    // 清空屏幕，重新输出更新的迷宫
    system("cls");
    for (i=0;i<=5;i++) { puts(a[i]); }
    
	// system("pause");
    Sleep(5000);
	return 0;
}
