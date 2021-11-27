/*请编写函数fun,其功能是:计算并输出当x<0.97时如下多项式的值,直到|Sn-Sn-1|<0.000001为止。 
例如,若主函数从键盘给x输入0.21后,则输出为S=1.100000。

 
注意:请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号注释语句中填入所编写的若干语句。 试题程序: */
#include  <math.h>
#include  <stdio.h>
#include<stdlib.h>
double fun(double x)
{
/************Begin**************/
    double f1=1.0,p=1.0,sum=0.0,f0,t=1.0;
	int n=1;
	do{
		f0=f1;
		sum+=f0;
		t*=n;
		p*=(0.5-n+1)*x;
		f1=p/t;
		n++;
	}while(fabs(f1-f0)>=1e-6);
	return sum;
/************End**************/ 
}
int main()
{ int i;
  double x,s;
  FILE *out,*in;
  printf("Input x: ");
  scanf("%lf",&x);
  s=fun(x);
  printf("s=%lf\n ",s);
  /******************************/	
  in=fopen("in46.dat","r");
  out=fopen("out46.dat","w");
  while(!feof(in))
  {
       fscanf(in,"%d\n",&i);
       fprintf(out,"%lf\n",fun(i/100.0));
  }
  fclose(in);
  fclose(out);
  /******************************/
   system("pause");
return 0;
} 
