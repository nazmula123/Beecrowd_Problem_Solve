#include<stdio.h>
int main(){
int b;
scanf("%d",&b);
  while (b--)
  {
   
  int temp=0;
  int i=0,j=0,k=0,count=0;
  int a=0;
scanf("%d",&a);
  int m[a];
  for(i=0;i<a;i++){
    scanf("%d",&m[i]);
  }
  for(i=0;i<a;i++){
    for(j=i+1;j<a;j++){
       if(m[i]>m[j]){
            temp=m[i];
          m[i]=m[j];
          m[j]=temp;
       }
    }
  }
  for(i=0;i<a;i++){
    for(j=i+1;j<a;j++){
        if(m[i]==m[j])
{
  for( k=j;k<a;k++)
 m[k]=m[k+1];

a--;
j--;
} }
  }
  for(int i=0;i<a;i++){
     count++;
  }
  printf("%d\n",count);
  }
return 0;

}
