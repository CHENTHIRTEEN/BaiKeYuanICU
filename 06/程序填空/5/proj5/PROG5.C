/*请补充main函数,该函数的功能是:从键盘输入若干字符放到一个字符数组中,当按回车键时结束输入,
最后输出这个字符数组中的所有字符。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在main函数的横线上填入所编写的若干表达式或语句。
试题程序:*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	 int i=0;
	 char s[81];
	 char *p=s;
	 printf(" Input a string \n");
	 for(i=0;i<80;i++)
	 {
		s[i]=getchar();
		if(s[i]=='\n')
/**********FILL**********/
			break;
	 }
/**********FILL**********/
	 s[i]=0;
	 printf(" display the string \n");
	 while(*p)
/**********FILL**********/
		putchar(*p++);
return 0;
}
