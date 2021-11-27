/*编写函数fun,它的功能是:根据以下公式求p的值,结果由函数值带回。m与n为两个正数且要求m>n。
P=m!/(n!(m-n)!),例如,m=12,n=8时,运行结果为495.000000。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序:*/
#include <stdio.h>
#include <stdlib.h>
float fun (int m, int n)
{
/***************Begin************/
	int i;
	double p=1.0;
	for(i=1;i<=m;i++)
		p=p*i;
	for(i=1;i<=n;i++)
		p=p/i;
	for(i=1;i<=m-n;i++)
		p=p/i;
	return p;

/*************** End ************/ 
}
int main ()
{ 
  FILE *wf,*in;
  int n,k;
  printf ("p=%f\n",fun (12,8) ) ;
/******************************/
  in=fopen("in8.dat","r");
  wf=fopen("out8.dat","w");
  fscanf(in,"%d %d\n",&n,&k);
  fprintf (wf,"%f",fun(n,k));
  fclose(in);
  fclose(wf);
/*****************************/
system("pause");
return 0;
}
