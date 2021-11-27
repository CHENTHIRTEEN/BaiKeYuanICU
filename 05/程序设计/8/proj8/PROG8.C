/*请编写一个函数 void fun(char tt[],int pp[]),统计在tt字符串中"a"到"z"26个字母各自出现的次数,
并依次放在pp所指数组中。例如,当输入字符串abcdefghabcdeabc后,
程序的输出结果应该是:3 3 3 2 2 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
注意:部分源程序给出如下。 请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序:*/
#include <stdio.h>
#include <stdlib.h>
void fun(char tt[],int pp[] )
{
    /***************Begin************/
	int i, k=0;
	for(i=0;i<26;i++)
		pp[i]=0;
	while(tt[k]!='\0')
	{
		if(tt[k]>='a'&&tt[k]<='z')
		{
			pp[tt[k]-'a']++;
		}
		k++;
	}
    /*************** End ************/
}
int main( )
{  
  FILE *wf,*in;
  char aa[1000];
  int  bb[26], k;
  printf("\nPlease enter a char string : ") ; 
  scanf("%s",aa);
  fun(aa,bb);
  for (k=0 ;k<26 ; k++) 
    printf("%d\n",bb[k]) ;
/******************************/
  in=fopen("in02.dat","r");
  wf=fopen("out02.dat","w");
  fgets(aa,80,in);
  fun (aa,bb) ;
  for (k=0 ;k<26 ; k++) 
    fprintf(wf,"%d\n",bb[k]) ;
  fclose(wf);
  fclose(in);
/*****************************/
system("pause");
return 0;
}
