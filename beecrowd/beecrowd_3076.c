#include<stdio.h>
#include<math.h>
int main(){
double a;
while (scanf("%lf",&a)!=EOF)
{ 
printf("%.0lf\n",ceil(a/100.0));
}
return 0;
}