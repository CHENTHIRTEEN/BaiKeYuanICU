/*请编写一个函数fun,它的功能是:求出1到m(含m)之内能被7或11整除的所有整数放在数组a中,通过n返回这些数的个数。 
例如,若传给m的值为50,则程序输出: 7  11  14  21  22  28  33  35  42  44  49 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
试题程序: */
#include<stdio.h>
#include<stdlib.h>
#define M 100
int fun(int m, int a[])
{
    /***************Begin************/
	int i, j=0;
	for(i = 1;i<=m;i++)
	{
		if(i%7==0||i%11==0)a[j++]=i;
	}
	return j;

    /*************** End ************/
}
int main()
{ 
  FILE *wf,*in;
  int aa[M],n,k,i;
  n=fun(50,aa);
  for(k=0;k<n;k++)
     if((k+1)%20==0)       /*每行输出20个数*/
        {printf("%4d",aa[k]);
         printf("\n");
        }
     else 
        printf("%4d",aa[k]);
  printf("\n");
/******************************/
  in=fopen("in4.dat","r");
  wf=fopen("out4.dat","w");
  fscanf(in,"%d",&k);
  n=fun(k,aa);
  for(i=0;i<n;i++)
     fprintf(wf,"%d\n",aa[i]);
  fclose(wf);
  fclose(in);
/*****************************/
  return 0;
}
