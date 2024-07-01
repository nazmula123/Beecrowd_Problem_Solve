#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  scanf("%s",&str);
  int a=strlen(str);
  if(a>=10)
  printf("palavrao\n");
  else printf("palavrinha\n");
return 0;

}