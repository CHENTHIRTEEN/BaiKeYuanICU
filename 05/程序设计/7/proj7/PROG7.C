/*请编写函数fun,其功能是:将所有大于1小于等于整数m的非素数存入xx所指数组中,非素数的个数通过k传回。
例如,输入17,则应输出4 6 8 9 10 12 14 15 16。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序:*/ 
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int fun(int m, int xx[])
{
/**********Begin*******/
	int i,j,k=0;
	for(i = 3; i <= m;i++)
	{
		for(j=2;j<sqrt((double)i) + 1;j++)
		{
			if(i%j==0)
			{
				xx[k++]=i;
				break;
			}
		}
	}
	return k;
/*********End*********/  
}
int main()
{
  FILE *wf,*in;
  int m, n, zz[100];
  printf("\nPlease enter an integer number between 10 and 100: ");
  scanf("%d",&n);
  m=fun(n,zz);
  printf("\n\nThere are %d non-prime numbers less than %d: ",m,n);
  for(n=0;n<m;n++)
    printf("\n %4d",zz[n]);
/******************************/
  wf=fopen("1.out","w");
  in=fopen("1.in","r");
  fscanf(in,"%d",&n);
  m=fun(n,zz);
  for(n=0;n<m;n++)
    fprintf(wf,"%d\n",zz[n]);
  fclose(wf);
 fclose(in);
/*****************************/
system("pause");
return 0;
}
