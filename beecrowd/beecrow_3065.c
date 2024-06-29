#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
int arr[a];
  char ch;
  int sum=0,sum1=0;
  for(int i=0;i<a;i++)
  {
    scanf("%d %c",&arr[i],ch);
    if(ch=='+')
     sum=sum+arr[i];
    else if(ch=='-')
    sum1=sum1+arr[i];

  }
printf("%d",sum+sum1);

}

