/*下列给定程序中函数fun的功能是:将长整型数中每一位上为奇数的数依次取出,构成一个新数放在t中。高位仍在高位,低位仍在低位。
例如当s中的数为87653142时,t中的数为7531。 请改正函数fun中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。  试题程序:*/
#include  <stdlib.h>
#include  <stdio.h>
void fun(long s,long *t)
{int d;
 long s1=1;
/**********ERROR**********/
 *t=0;
 while(s>0)
    { d=s%10;
/**********ERROR**********/
      if(d%2==1)
        {*t=d*s1+*t;
         s1*=10;
        }
    s/=10;
    }
}  
int main()
{
long s, t;
printf("\nPlease enter s: "); scanf("%ld",&s);
/**********ERROR**********/
 fun(s,&t);
 printf("The result is :%ld\n",t);
return 0;
}
