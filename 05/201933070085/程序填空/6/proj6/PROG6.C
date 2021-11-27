/*函数fun()是判断一个NxN阶矩阵是否为魔方阵。（注：魔方阵是指一个矩阵中每行元素之和、没列元素之和以及主副对角线之和均相等）。
注意：仅在注释语句下面填入所编写的若干表达式或语句,其他部分不要改动。如：
         
则矩阵a是魔方阵而矩阵b不是魔方阵。
*/
#include<stdio.h>
#define N 3
int fun(int a[][N])
{
	int i,j,m1=0,m2=0,row,colum;
	for(i=0;i<N;i++)
	{
/**********FILL**********/
		j = N-i-1 ;
		m1+=a[i][i];
		m2+=a[i][j];
	}
	if(m1!=m2)
	  return 0;
	for(i=0;i<N;i++)
	{
/**********FILL**********/
		row=colum =0;
		for(j=0;j<N;j++)
		{
			row+=a[i][j];
     /**********FILL**********/
			colum+=a[i][j];
		}
		if((row!=colum)||(row!=m1))
		  return 0;
	}
/**********FILL**********/
	       return 1;
}
int main()
{
	int a[N][N]={{4,9,2},{3,5,7},{8,1,6}},b[N][N]={{3,9,2},{4,5,6},{8,1,7}};
	if(fun(a))
	  printf("a:is a magic square!\n");
	else
	  printf("a:is not a magic square!\n");
	if(fun(b))
	  printf("b:is a magic square!\n");
	else
	  printf("b:is not a magic square!\n");
	return 0;
}
