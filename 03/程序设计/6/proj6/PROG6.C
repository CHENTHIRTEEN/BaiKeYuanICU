/*编写函数fun，其功能是:根据输入正整数n（n<=9）的值,计算：  ，函数的返回值为s的值。
例如,若主函数从键盘给n输入9后,则输出为S=0.957340。 输入2，则输出S=0.954545,注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的注释语句之间填入所编写的若干语句。 试题程序: */
#include<stdio.h>
#include<stdlib.h> 
double fun(int m)
{
	/*********Begin*******/
	long t,i,k=1.0;
	double s=0.0;
	for(i=1,t=1;i<=9;i++)
	{ 
		s+=1.0/(i*t*k);
		t=t*10+1;
		k*=-1;
	}
	return s;

	/*********End********/
}
int main()
{
	int n,k,i,m;
	double s;
	FILE *in,*out;
	scanf("%d",&n);
	s=fun(n);
	printf("s=%lf\n",s);
	in=fopen("in62.dat","r");
	out=fopen("out62.dat","w");
	fscanf(in,"%d",&k);
	for(i=1;i<=k;i++)
	{
		fscanf(in,"%d",&m);
		fprintf(out,"%lf\n",fun(m));
	}
	fclose(in);
	fclose(out);
       system("pause");
	return 0;
}