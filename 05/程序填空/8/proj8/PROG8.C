/*请补充函数fun,该函数的功能是:整除x且是偶数的数,把这些数保存在数组bb中,并按从大到小的顺序输出。
例如当x=20时,依次输出:20 10 4 2。
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。试题程序:*/
#include <stdio.h>
void fun(int k,int bb[])
{
	 int i;
	 int j=0;

/**********FILL**********/
	 for(i=1;i<=k;i++)
	 {
		
/**********FILL**********/
         if(k%i==0&&i%2==0)
			bb[j++]=i;
	 }
	 printf("\n\n");

/**********FILL**********/
	 for(i=j - 1;i>=0;i--)
		printf("%d ",bb[i]);
}
int main()
{
	 int k=1;
	 int bb[100];
	 printf("\nPlease input X=");
	 scanf("%d",&k);
	 fun(k,bb);
    return 0;
}
