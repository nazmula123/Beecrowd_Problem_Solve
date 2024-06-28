#include<stdio.h>
#include<string.h>
int main(){
int a;
scanf("%d",&a);
while (a--)

{ int sum=0;
  char str[3];
  scanf("%s",&str);
  

    if(str[1]>='A' && str[1]<='Z'){
    sum=(str[2]-str[0])-'0';
    }
 else if(str[1]>='a' && str[1]<='a')
 {
 sum=(str[0]+str[2])-'0';
 }
 else if (str[1]>='A' && str[1]<='Z'&&str[0]==str[2] ||str[1]>='a' && str[1]<='z'&&str){
 sum=(str[0]*str[2])-'0';
 
 }

printf ("%d\n",sum);
}

return 0;
}