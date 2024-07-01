#include<stdio.h>
int main()
{

 int a;
 while (1)
 {  
    int a;
    scanf("%d",&a);
    if(a==0)
 break;
  
  int sum=0;
if(a%2==0){
  
for(int i=0;i<5;i++){
sum=sum+a;
a=a+2;
}
printf("%d\n",sum);
}
else{
a=a+1;
for(int i=0;i<5;i++){
    sum+=a;
    a+=2;
}

printf("%d\n",sum);
}
}

return 0;
 }
 