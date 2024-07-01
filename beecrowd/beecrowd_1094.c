#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  float arr;char str;float sum1=0.0,sum2=0.0,sum3=0.0;
  for(int i=0;i<a;i++){
    scanf("%f %c",&arr,&str);
  
    if('C'==str) sum1+=arr;
    if('R'==str) sum2+=arr;
    if('S'==str) sum3+=arr;
  }
  char c='%';
  float sum=sum1+sum2+sum3;
  float par1=(sum1*100)/sum;
  float par2=(sum2*100)/sum;
  float par3=(sum3*100)/sum;
printf("Total: %.0f cobaias\n",sum);
printf("Total de coelhos: %.0f\n",sum1);
printf("Total de ratos: %.0f\n",sum2);
printf("Total de sapos: %.0f\n",sum3);
printf("Percentual de coelhos: %.2f %c\n",par1,c);
printf("Percentual de ratos: %.2f %c\n",par2,c);
printf("Percentual de sapos: %.2f %c\n",par3,c);
return 0;
}