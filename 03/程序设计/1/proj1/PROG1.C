/*编写函数fun,它的功能是:求n以内(不包括n)同时能被5与11整除的所有自然数之和的平方根s,并作为函数值返回。
例如,n为1000时,函数值应为s=96.979379。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序:*/
#include <math.h>
#include <stdio.h>
#include<stdlib.h>
double  fun(int n)
{
/***************Begin************/
	double s=0.0;
	int i;
	for(i=0;i<n;i++)
	{
		if(i%5==0&&i%11==0)
			s+=i;
	}
	return sqrt(s);
/*************** End ************/
}

int main()
{
 FILE *wf,*in;
int n;
printf("s=%f\n", fun(1000));
/******************************/
 in=fopen("in6.dat","r");
 wf=fopen("out6.dat","w");
 fscanf(in,"%d\n",&n);
 fprintf(wf,"%lf",fun(n));
 fclose(in);
 fclose(wf);
/*****************************/
system("pause");
 return 0;
}
