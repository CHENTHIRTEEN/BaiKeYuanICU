/*请补充函数fun,该函数的功能是:把一个整数转换成字符串,并倒序保存在字符数组str中。
例如,当n=13572468时,str="86427531"。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。
试题程序:*/
#include <stdlib.h>
#include <stdio.h>
#define N 80
char str[N];
void fun(long int n)
{
	 int i=0;
/**********FILL**********/
	 while(n>0)
	 {
/**********FILL**********/
		str[i]= n % 10 + '0';
		n/=10;
		i++;
	 }
/**********FILL**********/
	   str[i] = '\0' ;
}
int main()
{
	 long int n=13572468;
	 printf("*** the origial data ***\n");
	 printf("n=%ld",n);
	 fun(n);
	 printf("\n%s",str);
return 0;
}

