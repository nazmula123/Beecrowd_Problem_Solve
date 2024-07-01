#include<stdio.h>
int main(){

float i,j,a=1.0;
for(i=0.0;i<=2.20;i=i+0.2){
   if(i==0.0 || i==1.0||i>2.0){
    for(j=1.0;j<=3.0;j=j+a){
printf("I=%.0f J=%.0f\n",i ,j+i);
    }
   }
    else for(j=1.0;j<=3.0;j=j+1.0){
      
printf("I=%.1f J=%.1f\n",i ,j+i);
    }
}

return 0;
}