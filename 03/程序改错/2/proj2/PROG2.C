/*下列给定程序中,函数fun的功能是:求三个数的最小公倍数。例如,给变量x1、x2、x3分别输入15、11、2,则输出结果应当是330。
请改正程序中的错误,使它能得出正确的结果。
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。
试题程序: */
#include <stdio.h>
int fun(int x,int y,int z)
{ int j,t,n,m;
/**********ERROR**********/
  j=0;
  t=m=n=1;
/**********ERROR**********/
  while (t!=0 || m!=0 || n!=0)
  {
	j=j+1;
	t=j%x;
	m=j%y;
	n=j%z;
  } 
  return j;
}
int main()
{
  int x1,x2,x3,j;
  printf("Input x1 x2 x3: ");
  scanf("%d%d%d",&x1,&x2,&x3);
  printf("x1=%d,x2=%d,x3=%d \n",x1,x2,x3);
  j=fun(x1,x2,x3);
  printf("The minimal common multiple is: %d\n",j);
 return 0;
}
