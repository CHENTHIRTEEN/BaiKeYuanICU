/*编写函数fun,其功能是求下面分数数列的前n项的和，  ，
输入项数n得到前n项和s。如输入n=10，s=0.574793，注意：不要修改main函数的结构，只在fun函数的注释语句之间编写程序代码。
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double fun(int n)
{
	/***********Begin**********/
	double sn=0,an=1,bf=1,bb=2,bt;
	int i;
	sn=1-1/sqrt(2.0);
	for(i=3;i<=n;i++)
	{
		sn+=an/sqrt(bf+bb);
		an*=-1;
		bt=bb;
		bb+=bf;
		bf=bt;
	}
	return sn;

	/***********End**********/
}
int main()
{
	int n,i;
	double s;
	FILE *in,*out;
	scanf("%d",&n);
	s=fun(n);
	printf("s=%lf\n",s);
	/*******************/
	in=fopen("in82.dat","r");
	out=fopen("out82.dat","w");
	while(!feof(in))
	{
		fscanf(in,"%d\n",&n);
		s=fun(n);
		fprintf(out,"%lf\n",s);
	}
	fclose(in);
	fclose(out);
           system("pause");
	return 0;
}