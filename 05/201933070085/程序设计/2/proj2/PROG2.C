/*m个人的成绩存放在score数组中,请编写函数fun,它的功能是:将低于平均分的人数作为函数值返回,将低于平均分的分数放在below所指的数组中。 
例如,当score数组中的数据为10,20,30,40,50,60,70,80,90时,函数返回的人数应该是4,below中的数据应为10,20,30,40。 
注意:部分源程序给出如下。 请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号注释语句之间填入所编写的若干语句。试题程序: */
#include <stdio.h>
#include <stdlib.h>
int fun(int score[],int m, int below[])
{
/************Begin**************/	
	float ave = 0.0;
	int i, j = 0;
	for(i=0;i<m;i++)
		ave+=(float)score[i]/m;
	for(i=0;i<m;i++)
	{
		if(score[i]<ave)
		{
			below[j]=score[i];
			j++;
		}
	}
	return j;
/************End**************/ 
}
int main()
{
  FILE *wf,*in;
  int i, n, m,below[100];
  int score[100]={10,20,30,40,50,60,70,80,90};
  n=fun(score, 9, below);
  printf("\nBelow the average score are: ");
  for(i=0;i<n;i++)  
     printf("%d ",below[i]);
/******************************/
  in=fopen("in47.dat","r");
  wf=fopen("out47.dat","w");
  fscanf(in,"%d",&m);
  for(i=0;i<m;i++)
	  fscanf(in,"%d",&score[i]);
  n=fun(score,m,below);
  for(i=0;i<n;i++)  
     fprintf(wf,"%d\n",below[i]);
  fclose(wf);
  fclose(in);
/*****************************/
return 0;
}
