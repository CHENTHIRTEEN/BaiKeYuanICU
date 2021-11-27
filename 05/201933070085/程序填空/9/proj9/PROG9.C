/*右下拐角矩阵：对于一个n阶方阵，输入n=5，得到如下所示的n阶右下拐角矩阵
   
函数fun的功能，就是根据输入的n，产生一个n阶右下拐矩阵。请勿改动程序的结构,仅在指定位置填入所编写的若干表达式或语句。
*/
#include<stdio.h>
#include<stdlib.h>
#define N 100
/**********FILL**********/
void fun(int x[][N],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	  for(j=1;j<=n;j++)
	    if(i<=j)
/**********FILL**********/
	      x[i][j]=n - j + 1;
	    else
/**********FILL**********/
	      x[i][j]=n - i + 1;
}
int main()
{
	int n,i,j,a[N][N];
	scanf("%d",&n);
/**********FILL**********/
	fun(a, n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		  printf("%d ",a[i][j]);
		printf("\n");
	}
            system("pause");
	return 0;
}