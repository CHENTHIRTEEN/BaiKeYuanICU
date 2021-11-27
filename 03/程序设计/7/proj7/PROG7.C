/*编写函数fun,其功能是求下面分数数列的前n项的和，  ，
输入项数n得到前n项和s。如输入n=10，s=0.349288，
注意：不要修改main函数的结构，只在fun函数的注释语句之间编写程序代码。
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double fun(int n)
{
	/***********Begin***********/
	double s=0.0,a=1,b=1;
	int i, k=1;
	int x=-1,y;
	for(i=1;i<=n;i++)
	{
		a*=(2*i+1);
		b=b*(i);
		y=i+1;
		s+=sqrt(b/a)*k;
		k*=-1;
	}
	return s;

	/***********End************/
}

int main()
{
	int n;
	double s;
	FILE *in,*out;
	scanf("%d",&n);
	s=fun(n);
	printf("s=%lf\n",s);
	/***********************/
	in=fopen("in83.dat","r");
	out=fopen("out83.dat","w");
	while(!feof(in))
	{
		fscanf(in,"%d\n",&n);
		fprintf(out,"%lf\n",fun(n));
	}
	fclose(in);
	fclose(out);
            system("pause");
	return 0;	
}
