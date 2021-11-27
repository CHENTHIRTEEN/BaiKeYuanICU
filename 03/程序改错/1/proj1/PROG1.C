/*下列给定程序中,函数fun的功能是:根据以下公式求PI(3.14)的值,并作为函数值返回。例如,给指定精度的变量eps输入0.0005时,应当输出Pi=3.140578。 
PI/2=1+1/3+1/3*2/5+1/3*2/5*3/7+1/3*2/5*3/7*4/9 
请改正程序中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 试题程序: */
#include  <stdio.h>
#include  <math.h>
double fun(double eps)
{double s,t; int n=1;
 s=0.0;
/**********ERROR**********/
 t=1;
/**********ERROR**********/
 while(t>=eps)
    { s+=t;
      t=t*n/(2*n+1);
      n++;
    }
/**********ERROR**********/
 return (s*2);
}
int main()
{ double x;
  printf("\nPlease enter a precision: ");
scanf("%lf",&x);
  printf("\nPi=%lf\n ",fun(x));
  return 0;
}
