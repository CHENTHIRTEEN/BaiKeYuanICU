/*请编写函数fun,该函数的功能是:删除一维数组中所有相同的数,使之只剩一个。数组中的数已按由小到大的顺序排列,
函数返回删除后数组中数据的个数。例如,若一维数组中的数据是: 
2 2 2 3 4 4 5 6 6 6 6 7 7 8 9 9 10 0 0 
删除后,数组中的内容应该是: 
2 3 4 5 6 7 8 9 10 0。 
注意:部分源程序给出如下。 请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 试题程序: */
#include <stdio.h>
#define N 80
int fun(int a[], int n)
{
/************Begin**************/	
	int i,j=0;
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[j])
		{
			a[++j]=a[i];
		}
	}
	return j+1;

/************End**************/
 
}
int main()
{ 
  FILE *wf,*in;
  int a[N]={ 2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,0,0}, i, n=20;
  printf("The original data :\n");
  for(i=0; i<n; i++)  
     printf("%3d",a[i]);
  n=fun(a,n);
  printf("\n\nThe data after deleted :\n");
  for(i=0; i<n; i++)  
     printf("%3d",a[i]);  
  printf("\n\n");
/******************************/
  in=fopen("in50.dat","r");
  wf=fopen("out50.dat","w");
  fscanf(in,"%d",&n);
  for(i=0;i<n;i++)
	  fscanf(in,"%d",&a[i]);
  n=fun(a,n);
  for(i=0; i<n; i++)  
     fprintf(wf,"%3d",a[i]);
  fclose(wf);
  fclose(in);
/*****************************/
return 0;
}
