#include <stdio.h>  //printf函数需要这个头文件
#include <stdlib.h> //system函数需要这个头文件
int main(void)				//main函数每个程序都要有,void是一个形参,我习惯这样规范写
{
	int a;					//声明了一个类型，其类型为:int(int是4字节)，命名为:a;
	a = 10;					//给a赋值，值为10;
	printf("变量a:%d\n", a);//printf是打印输出函数,%d是打印格式,我们用到哪学到哪
	
	int b = 0;				//也可声明的同时直接赋值
	printf("变量b:%d\n",b);	
	printf("————————————————————————————————————\n");//\n是换行

	system("pause");		//system是函数，pause 是暂停（暂停CMD窗口不然会直接关闭）
	return 0;				//return是函数，值的含义 0是正常退出，-1是异常退出.
}


	//不能同时存在两个main  所以我给其他main加上数字不然冲突了，留着想运行的main不加数字
int main0(void)
{

	printf("");
	system("pause");
	return 0;
}















/*
% d	int	接受整数值并将它表示为有符号的十进制整数
% hd	short int	短整数
% hu	unsigned short 	无符号短整数
% o	unsigned int	无符号8进制整数
% u	unsigned int	无符号10进制整数
% x, % X	unsigned int	无符号16进制整数，x对应的是abcdef，X对应的是ABCDEF
% f	float	单精度浮点数
% lf	double	双精度浮点数
% e, % E	double	科学计数法表示的数，此处"e"的大小写代表在输出时用的"e"的大小写
% c	char	字符型。可以把输入的数字按照ASCII码相应转换为对应的字符
% s	char* 字符串。输出字符串中的字符直至字符串中的空字符（字符串以'\0‘结尾，这个'\0'即空字符）
% p	void* 以16进制形式输出指针
%%% 输出一个百分号
*/