/*编写函数int fun(int lim, int aa[MAX]),该函数的功能是求出小于或等于lim的所有素数并放在aa数组中,该函数返回所求出的素数的个数。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
试题程序: */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100
int fun(int lim, int aa[MAX])
{
/*********Begin********/
	int i, j, k = 0;
	for(i=2;i<=lim;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)break;
		if(j>=i)aa[k++]=i;
	}
	return k;
/*********End*********/  
}
int main()
{
  FILE *wf,*in;
  int limit,i,sum;
  int aa[MAX];
  printf("输入一个整数");
  scanf("%d",&limit);
  sum=fun(limit,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*每行输出10个数*/
         printf("\n ");
      printf("%5d ",aa[i]);
    }
/******************************/
  in=fopen("2.in","r");
  fscanf(in,"%d",&limit);
  wf=fopen("2.out","w");
  sum=fun(limit,aa);        
  for(i=0;i<sum;i++)
     {
      fprintf(wf,"%d\n",aa[i]);
    }
  fclose(wf);
fclose(in);
/*****************************/
system("pause");
return 0;
}
