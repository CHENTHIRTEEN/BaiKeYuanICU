/*请补充main函数,该函数的功能是:输出一个NxN矩阵,要求非对角线上的元素赋值为0,对角线元素赋值为1。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在main函数的横线上填入所编写的若干表达式或语句。 
试题程序: */
#include <stdio.h>
#define N 10
int main()
{
	 int bb[N][N];
	 int i,j,n;
	 printf(" \nInput n:\n");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
/**********FILL**********/
			   bb[i][j] = 0;
			if(i==j)
/**********FILL**********/
				bb[i][j]=   1;
/**********FILL**********/
			if(j==n-i-1)
				bb[i][j]=1;
		}
	 printf(" \n***** the result ***** \n");
	 for(i=0;i<n;i++)
	 {
		printf(" \n\n");
		for(j=0;j<n;j++)
			printf("%4d",bb[i][j]);
	 }
     return 0;
}
