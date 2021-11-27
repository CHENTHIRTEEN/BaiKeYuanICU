/*下列给定程序中,函数fun的功能是:求出两个数的最大公约数,并作为函数值返回。例如,若给num1和num2输入49和21,
则输出的最大公约数为7;若给num1和num2分别输入27和81,则输出最大公约数为27。 
请改正函数fun中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 试题程序: */
#include  <stdio.h>
int fun (int a, int b)
{ int r,t;
  if(a<b)
/**********ERROR**********/
  { t=a;a=b;a=t;}
  r=a%b;
  while(r!=0)
   { a=b;b=r;r=a%b;}
/**********ERROR**********/
  return(b);
}
int main()
{ int num1,num2,a;
  printf("Input num1  num2: "); 
  scanf("%d%d",&num1,&num2);
  printf("num1=%d num2=%d\n\n",num1,num2);
  a=fun(num1,num2);
  printf("The maximun common divisor is %d\n\n",a);
return 0;
}
