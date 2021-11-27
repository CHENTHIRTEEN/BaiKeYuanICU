/*学生的记录由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中,请编写函数fun，它的功能是：
把分数最高的学生数据放在b所指的数组中,注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。 
注意: 部分源程序在如下。 
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入 
你编写的若干语句。 
给定源程序： */
#include <stdio.h> 
#define N 16 
typedef struct 
{	 char num[10]; 
int s; 
} STREC; 
int fun( STREC *a, STREC *b ) 
{
   /**************Begin*************/
	int i,j=0,n=0,max;
	max=a[0].s;
	for(i=0;i<N;i++)
	{
		if(a[i].s>max){
			max=a[i].s;
		}
	}
	for(i=0;i<N;i++)
	{
		if(a[i].s==max){
			{
				*(b+j)=a[i];
				j++;n++;
			}
		}
	}
	return n;
   /*************End***************/
    
} 
int main() 
{ STREC s[N]={{"GA05",85},{"GA03",76},{"GA02",69},{"GA04",85}, 
  {"GA01",91},{"GA07",72},{"GA08",64},{"GA06",87}, 
  {"GA015",85},{"GA013",91},{"GA012",64},{"GA014",91}, 
  {"GA011",77},{"GA017",64},{"GA018",64},{"GA016",72}}; 
STREC h[N]; 
   int i,n;
   FILE *out,*in;
   n=fun(s,h);
   printf("The %d highest score :\n",n);
   for(i=0;i<n; i++)
     printf("%s  %4d\n",h[i].num,h[i].s);
   printf("\n");
   out = fopen("out03.dat","w");
   in=fopen("in03.dat","r");
   i=0;
   while(!feof(in))
   {
      fscanf(in,"%s %d\n",h[i].num,&h[i].s);
      i++;
   }
   n=fun(s,h);
   for(i=0;i<n; i++)
   {
     fprintf(out, "%s %d\n",h[i].num,h[i].s);
   }
   fclose(in);
   fclose(out);
return 0;
} 
