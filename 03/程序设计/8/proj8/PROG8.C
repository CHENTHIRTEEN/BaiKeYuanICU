/*请编写一个函数 unsigned fun(unsigned w),w是一个大于10的无符号整数,若w是n(n>=2)位的整数,
则函数求出w的后n-1位的数作为函数值返回。 例如,w值为5923,则函数返回923;若w值为923,则函数返回23。
注意:部分源程序给出如下。请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序: */
#include<stdio.h>
#include<stdlib.h>
unsigned fun(unsigned w)
{
/***********Begin**************/
	int c=0,t=w,i;
	while(t)
	{
		++c;
		t/=10;
	}
	if(c>1)
	{
		t=1;
		for(i=0;i<c-1;++i)
			t*=10;
		return (w%t);
	}
	return 0;

/***********End****************/
}
int main()
{ 
  FILE *wf,*in;
  unsigned x;
  printf("Enter a unsigned integer number: ");
  scanf ("%u",&x);
  printf("The original data is:%u\n",x);
  if(x<10) 
    printf("Data error! ");
  else 
    printf ("The result :%u\n", fun(x));
/******************************/
  in=fopen("in35.dat","r");
  wf=fopen("out35.dat","w");
  fscanf(in,"%u",&x);
  fprintf(wf,"%u\n",fun(x));
  fscanf(in,"%u",&x);
  fprintf(wf,"%u\n",fun(x));
  fclose(in);
  fclose(wf);
/*****************************/
system("pause");
return 0;
}
