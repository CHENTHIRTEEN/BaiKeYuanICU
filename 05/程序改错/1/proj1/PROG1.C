/*下列给定程序中,函数fun的功能是:先从键盘上输入一个3行、3列的矩阵的各个元素的值,然后输出主对角线元素之和。
请改正函数fun中的错误,使它能得出正确的结果。
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。
试题程序:*/
#include <stdio.h>
void fun()
{
 int a[3][3],sum;
 int i,j;
/**********ERROR**********/
 sum=0;
 for (i=0;i<3;i++)
    { for (j=0;j<3;j++)
/**********ERROR**********/
      scanf("%d",&a[i][j]);
    }
 for(i=0;i<3;i++)
     sum=sum+a[i][i];
 printf("Sum=%d\n",sum);
}
int main()
{
fun();
return 0;
}
