/*有n个学生，每个学生的数据包括学号，C语言程序设计课程的平时成绩和期末考试成绩，测试数据已在主函数中，要求按平时成绩占30%，期末成绩占70%计算总评成绩，
并将总评成绩低于90分，且高于等于80分的同学的等级确定为"良好"，并将这些同学的对应信息存放在结构体数组h中，人数通过函数返回值得到，输出相应的信息。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中注释语句之间填入所编写的若干语句。*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define  N 100
typedef  struct
{ char num[10];/*学号*/
  int s1;/*期末成绩*/
  int s2;/*平时成绩*/
  float sum; /*总评*/
  char level[10]; /*等级*/
} STU;
int fun (STU a[],int n,STU h[])
{
/************Begin************/
	int k=0,i;
	double ave=0;
	for(i=0;i<n;i++){
		a[i].sum=0.3*a[i].s1+0.7*a[i].s2;
	}

	for(i=0;i<n;i++){
		if((80<=a[i].sum)&&(a[i].sum<90)){
			strcpy(a[i].level,"良好");
			h[k++]=a[i];
		}
	}
	return k;
 /************End**************/
}
int main()
{
  STU s[N]={{"GA05",85,76},{"GA03",76,90},{"GA02",69,90},{"GA04",85,56},{"GA01",91,95},
				{"GA07",72,80},{"GA08",64,45},  {"GA06",87,98},{"GA015",85,86},{"GA013",91,97}},h[N];
  int i,k,n=10; 
  FILE *out,*in;
  k=fun(s,n,h);
  printf("There are :\n");
  for(i=0;i<k;i++)
    printf("%s %d %d %.2f %s\n",h[i].num,h[i].s1,h[i].s2,h[i].sum,h[i].level);
  /******************************/
  in=fopen("in68.dat","r");
  out=fopen("out68.dat","w");
  i=0;
  while(!feof(in))
  {
  	fscanf(in,"%s %d %d",s[i].num,&s[i].s1,&s[i].s2);
  	i++;
  }
  n=i;
  k=fun(s,n,h);
  for(i=0;i<k;i++)
    fprintf(out,"%s %d %d %.2f %s\n",h[i].num,h[i].s1,h[i].s2,h[i].sum,h[i].level);
  fclose(out);
  fclose(in);
  /******************************/
  system("pause");
  return 0;
}
