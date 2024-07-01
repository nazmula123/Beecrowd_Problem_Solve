#include<stdio.h>
int main()
{
    int b=1,a=5;
    char str;
    scanf("%c",&str);
    double arr[12][12],sum=0.0;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
          scanf("%lf",&arr[i][j]);
        }

    }

    for(int i=1;i<11;i++){

      if(i<=5) {
         for(int j=0;j<b;j++){

            sum+=arr[i][j];
      }
        b++;
      }
            else if(i>=6){
                for(int j=0;j<a;j++){
        sum+=arr[i][j];
        }
        a--;
            }
    }
    if(str=='S')  printf("%.1lf\n",sum);
    else if(str=='M') printf("%.1lf\n",sum/30.0);

return 0;


}