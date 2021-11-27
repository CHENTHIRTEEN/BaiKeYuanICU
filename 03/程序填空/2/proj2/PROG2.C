/*请补充main函数,该函数的功能是:计算两个自然数n和m(m<10000)之间所有数的和(n和m从键盘输入)。 
例如,当n=1,m=100时,sum=5050;当n=100,m=1000时,sum=495550。 
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在main函数的横线上填入所编写的若干表达式或语句。
试题程序:*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	 int n,m;
	 long sum;
/**********FILL**********/
	 sum=0;
	 printf("\nInput n,m\n");
	 scanf("%d,%d",&n,&m);
	 while(n<=m)
	 {
/**********FILL**********/
		sum+=n;
		n++;
	 }
/**********FILL**********/
	 printf("sum=%ld\n",sum);
return 0;
}
