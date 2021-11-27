/*下列给定程序中,函数fun的功能是:输出M行、M列整数方阵,然后求两条对角线上的各元素之和,返回此和数。 
请改正程序中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 试题程序: */
#include  <stdio.h>
#define  M  5
/**********ERROR**********/
int fun(int n,int xx[ ][M])
{ int i, j, sum=0;
  printf("\nThe %d x %d matrix:\n",M,M);
  for(i=0;i<M;i++)
      { for(j=0;j<M;j++)
/**********ERROR**********/
        printf("%d",xx[i][j]);
        printf("\n");
      }
  for(i=0;i<n;i++)
/**********ERROR**********/
      sum+=xx[i][i]+xx[i][n-i-1];
  return(sum);
}
int main()
{ int aa[M][M]={{1,2,3,4,5},{4,3,2,1,0},{6,7,8,9,0},{9,8,7,6,5},{3,4,5,6,7}};
  printf("\nThe sum of all elements on 2 diagnals is %d",fun(M,aa));
return 0;
} 