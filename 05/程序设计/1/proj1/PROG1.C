/*    编写程序，实现矩阵（3行3列）的转置（即行列互换）。
例如，输入下面的矩阵：  
         100  200  300
         400  500  600
         700  800  900
程序输出：  
         100  400  700
         200  500  800
         300  600  900
    注意： 部分源程序存在文件program.c中。
    请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。*/



#include <stdio.h>
#include<stdlib.h>
void fun(int array[3][3])
{


    /**********  Begin  **********/
	int i, j, t;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			if(i<j)
			{
				t=array[i][j];
				array[i][j]=array[j][i];
				array[j][i]=t;
			}
		}
    /**********   End  ***********/


}

void NONO( )
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
    输出数据，关闭文件。 */
    int i,j;
    FILE  *wf ,*in;
    int array[3][3]={{100,200,300},
                     {400,500,600},
                     {700,800,900}};
    in=fopen("a11.in","r");
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
	fscanf(in,"%d",&array[i][j]);
     }
    wf = fopen("a11.out", "w") ;
    fun(array);
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
	fprintf(wf,"%7d\n",array[i][j]);
     }

    fclose(wf) ;
    fclose(in);
}

int main()
{
    int i,j;
    int array[3][3]={{100,200,300},
                     {400,500,600},
                     {700,800,900}};
     for (i=0;i<3;i++)
    {    for (j=0;j<3;j++)
         printf("%7d",array[i][j]);
         printf("\n");
    }
    fun(array);
    printf("Converted array:\n");
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        printf("%7d",array[i][j]);
        printf("\n");
    }
 NONO( );
 system("pause");
 return 0;
}

