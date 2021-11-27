/*下列给定程序中函数fun的功能是:先将在字符串s中的字符按逆序存放到t串中,然后把s中的字符按正序连接到t串的后面。
例如,当s中的字符串为ABCDE时,则t中的字符串应为EDCBAABCDE。
请改正程序中的错误,使它能得出正确的结果。
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。
试题程序: */
#include  <stdlib.h>
#include  <stdio.h>
#include  <string.h>
void fun (char *s, char *t )
{
  int i,s1;
  s1=strlen(s);    
  for (i=0;i<s1;i++)
/**********ERROR**********/
      t[i]=s[s1-1-i];    
  for (i=0;i<s1;i++)
      t[s1+i]=s[i];
/**********ERROR**********/
  t[2*s1]='\0';
}
int main()
{char s[100], t[100];
  printf("\nPlease enter string s: "); 
  scanf("%s",s);
/**********ERROR**********/
  fun(s,t);
  printf ("The result is: %s\n",t);
return 0;
}
