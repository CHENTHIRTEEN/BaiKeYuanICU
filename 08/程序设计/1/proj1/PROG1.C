/*学生的记录由学号和成绩组成,N名学生的数据已在主函数中放入结构体数组s中,请编写函数fun,它的功能是:
把低于平均分的学生数据放在b所指的数组中,低于平均分的学生人数通过形参n传回,平均分通过函数值返回。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。试题程序: */
#include<stdio.h>
#define N 8
typedef struct
{ char num[10];
  double s; 
} STREC;
double fun(STREC *a, STREC *b, int *n)
{
/************Begin************/
	int i,j=0;
	double av=0.0;
	for(i=0;i<N;i++)
		av=av+a[i].s;
	av=av/N;
	for(i=0;i<N;i++)
		if(a[i].s<av)
			b[j++]=a[i];
	*n=j;
	return av;


/************End***************/
}
int main()
{ 
  FILE *wf,*in;
  STREC s[N]={{ "GA05 ",85},{ "GA03 ",76},{ "GA02 ",69},{ "GA04 ",85},
  { "GA01 ",91},{ "GA07 ",72},{ "GA08 ",64},{ "GA06 ",87}};
  STREC h[N]; 
  int i,n; 
  double ave;
  ave=fun(s,h,&n);
  printf("The %d student data which is lower than %7.3f:\n ", n,ave);
  for(i=0;i<n;i++)             /*输出成绩低于平均值的学生记录*/
    printf("%s %4.1f\n ",h[i].num,h[i].s);
  printf("\n ");
/******************************/
  in=fopen("in30.dat","r");
  i=0;
  while(!feof(in))
  {
     fscanf(in,"%s %lf\n",s[i].num,&s[i].s);
     i++;
   }
  wf=fopen("out30.dat","w");
  ave=fun(s,h,&n);
  fprintf(wf, "%d %7.3f\n",n,ave);
  for(i=0;i<n;i++)
    fprintf(wf, "%s %4.1f\n",h[i].num,h[i].s);
  fclose(in);
  fclose(wf);
/*****************************/
return 0;
}
