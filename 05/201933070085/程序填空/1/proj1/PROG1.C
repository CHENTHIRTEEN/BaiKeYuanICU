/*
下面程序的功能是将一个整数数组中存储的N个整数循环右移或循环左移m次。数组中各元素的初始值为1，2，3，4，5，6，7，8。
函数fun的功能是将形参数组中前n元素值，循环移位m次，形参k表示移位方向，k=0表示循环右移，k=1表示循环左移。
m=3，k=0时输出：6，7，8，1，2，3，4，5
m=3，k=1时输出：4，5，6，7，8，1，2，3
注意：仅在注释语句下面填入所编写的若干表达式或语句,其他部分不要改动。
*/
#include<stdio.h>
#define N 8
void fun(int a[],int n,int m,int k)
{
	int i,temp;
	if (m<0)return;
/**********FILL**********/
	while(m > 0)
	{
		if(!k)
		{
			temp=a[n-1];
			for(i=n-1;i>0;i--)
			{
             /**********FILL**********/
			  a[i]=a[i - 1];
			} 
			a[0]=temp;
		}
		else
		{
			temp=a[0];
			for(i=1;i<n;i++)
			  a[i-1]=a[i];			
      /**********FILL**********/ 
			   a[n - 1]=temp;
		}
		m--;
	}
}
int main()
{
	int a[N]={1,2,3,4,5,6,7,8},m,i,k;
	printf("Input m:\n");
	scanf("%d",&m);
	printf("Input k:\n");
	scanf("%d",&k);	
    /**********FILL**********/ 
	fun(a, N, m, k);
	printf("Result:\n");
	for(i=0;i<N;i++)
	  printf("%4d",a[i]);
	return 0;
}
