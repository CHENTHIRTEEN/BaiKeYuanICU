/*请补充main函数,该函数的功能是:打印出1-1000中满足个位数字的立方等于其本身所有数。
本题的结果为:1 64 125 216 729 
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数main的横线上填入所编写的若干表达式或语句。
试题程序:*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	 int i,g;
	 for(i=1;i<1000;i++)
	 {
/**********FILL**********/
		g=i%10;/*个位数*/
/**********FILL**********/
		if(g*g*g==i)
			printf("%4d",i);
	 }
return 0;
}
