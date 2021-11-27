/*函数fun的功能是:逆置数组元素中的值。形参n给出数组中数据的个数。 例如,若a所指数组中的数据依次为:
1、2、3、4、5、6、7、8、9,则逆置后为:9、8、7、6、5、4、3、2、1。 注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。 试题程序: */
#include <stdio.h>
void fun(int a[],int n)
{
	int i,t;
/**********FILL**********/
	for(i=0;i<n/2;i++)
	 {
		t=a[i];
/**********FILL**********/
		a[i]=a[n-1-i];
/**********FILL**********/
		a[n-i-1]=t;
	 }
}
int main()
{
	 int b[9]={1,2,3,4,5,6,7,8,9},i;
	 printf("\nthe original data :\n");
	 for(i=0;i<9; i++)
		printf("%4d",b[i]);
	 printf("\n");
	 fun(b,9);
	 printf("\n\the data after inbert:\n");
	 for(i=0;i<9;i++)
		printf("%4d",b[i]);
	 printf("\n");
return 0;
}