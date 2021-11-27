/*请编写函数fun,该函数的功能是:移动一维数组中的内容,若数组中有n个整数,要求把下标从0到p(p<=n-1)的数组元素平移到数组的最后。 
例如,一维数组中的原始内容为1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,p的值为3。移动后,一维数组中的内容应为5,6,7,8,9,10,11,12,13,14,15,1,2,3,4。 
注意:部分源程序给出如下。请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号注释语句中填入所编写的若干语句。 试题程序: */
#include <stdio.h>
#define N 20
void fun(int w[], int p, int n)
{
/************Begin**************/	
	int i,j,t;
	for(j=0;j<=p;j++)
	{
		t=w[0];
		for(i=0;i<n-1;i++)
			w[i]=w[i+1];
		w[n-1]=t;
	}
/************End**************/
}
int main()
{
  FILE *wf,*in;
  int a[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int i, p, n=15;
  printf("The original data:\n");
  for(i=0;i<n;i++) 
     printf("%3d",a[i]);
  printf("\n\nEnter p: "); 
  scanf("%d",&p);
  fun(a,p,n);
  printf("\nThe data after moving:\n");
  for(i=0;i<n;i++) 
     printf("%3d",a[i]);
  printf("\n\n");
/******************************/
  in=fopen("in49.dat","r");
  wf=fopen("out49.dat","w");
  fscanf(in,"%d %d",&n,&p);
  for(i=0;i<n;i++)
    fscanf(in,"%d",&a[i]);
   fun(a,p,n);
  for(i=0;i<n;i++) 
     fprintf(wf,"%3d",a[i]);
  fclose(wf);
  fclose(in);
/*****************************/
return 0;
}
