#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // required by Sleep()
int main()
{
	// 定义循环变量
    int i;
    
    // 定义小球初始坐标(x,y)
    int x, y;
    // 定义箱子位置坐标
    int x1, y1, x2, y2, x3, y3, x4, y4;
    // 定义目标坐标
    int p1, p2, p3, p4, q1, q2, q3, q4;
    
    
    // 定义键盘输入的方向键变量
    char ch;
    
    // 初始化字符数组
    char a[50][50] = {
		"   ###     ",
        "   #*#     ",
        "   # #     ",
        "####O######",
        "#*  OS O *#",
        "#####O#####",
        "    # #    ",
        "    #*#    ",
        "    ###    "
    };
    
    // 给出小人初始坐标
    x=4; y=5;
    // 给出箱子的初始坐标
    x1=3; y1=4;
    x2=4; y2=4;
    x3=5; y3=5;
    x4=4; y4=7;
    // 给出四个目标坐标
    p1=1; q1=4;
    p2=4; q2=1;
    p3=7; q3=5;
    p4=4; q4=9;
    
    // 在屏幕上输出初始化的迷宫
    for (i=0;i<=9;i++) { puts(a[i]); }
    
    while(a[1][4]!='@' || a[4][1]!='@' || a[4][9]!='@' || a[7][5]!='@') {
		// 读取方向键输入
		ch = getch();
		
		// 根据读入的方向进行相应处理
		// 向下
		if (ch=='s') {
			if (a[x+1][y]!='#') {
				if (a[x+1][y]!='O' && a[x+1][y]!='@') {
					a[x][y]=' ';
					x++;
					a[x][y]='S';
                }
                else {
					if (a[x+2][y]!='#') {
						if (a[x+2][y]!='*') {
							a[x][y]=' ';
							a[x+1][y]=' ';
							x++;
							a[x][y]='S';
							a[x+1][y]='O';
                        }
						else {
							a[x][y]=' ';
							a[x+1][y]=' ';
							x++;
							a[x][y]='S';
							a[x+1][y]='@';
                        }
                    }
                }
				
			}
		}
		// 向上
        if (ch=='w') {
			if (a[x-1][y]!='#') {
				if (a[x-1][y]!='O' && a[x-1][y]!='@') {
					a[x][y]=' ';
					x--;
					a[x][y]='S';
                }
                else {
					if (a[x-2][y]!='#') {
						if (a[x-2][y]!='*') {
							a[x][y]=' ';
							a[x-1][y]=' ';
							x--;
							a[x][y]='S';
							a[x-1][y]='O';
                        }
						else {
							a[x][y]=' ';
							a[x-1][y]=' ';
							x--;
							a[x][y]='S';
							a[x-1][y]='@';
                        }
                    }
                }
				
			}
		}
		// 向右
        if (ch=='d') {
			if (a[x][y+1]!='#') {
				if (a[x][y+1]!='O' && a[x][y+1]!='@') {
					a[x][y]=' ';
					y++;
					a[x][y]='S';
                }
                else {
					if (a[x][y+2]!='#') {
						if (a[x][y+2]!='*') {
							a[x][y]=' ';
							a[x][y+1]=' ';
							y++;
							a[x][y]='S';
							a[x][y+1]='O';
                        }
						else {
							a[x][y]=' ';
							a[x][y+1]=' ';
							y++;
							a[x][y]='S';
							a[x][y+1]='@';
                        }
                    }
                }
				
			}
		}
		// 向左
        if (ch=='a') {
			if (a[x][y-1]!='#') {
				if (a[x][y-1]!='O' && a[x][y-1]!='@') {
					a[x][y]=' ';
					y--;
					a[x][y]='S';
                }
                else {
					if (a[x][y-2]!='#') {
						if (a[x][y-2]!='*') {
							a[x][y]=' ';
							a[x][y-1]=' ';
							y--;
							a[x][y]='S';
							a[x][y-1]='O';
                        }
						else {
							a[x][y]=' ';
							a[x][y-1]=' ';
							y--;
							a[x][y]='S';
							a[x][y-1]='@';
                        }
                    }
                }
				
			}
		}
		
		// 清空屏幕，重新输出更新的迷宫
		system("cls");
		for (i=0;i<=9;i++) { puts(a[i]); }
    }
    
    // 打印游戏完成消息
    system("cls");
    printf("Congratulation! You Win!\n");
    
	// system("pause");
    Sleep(5000);
	return 0;
}
