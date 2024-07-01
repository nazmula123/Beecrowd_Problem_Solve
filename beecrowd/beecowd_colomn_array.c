#include<stdio.h>
#include<string.h>
int main()
{
    float arr[12][12],sum=0;
   char str[2];
   int a;
   scanf("%d",&a);
 scanf("%s",&str);

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){

           scanf("%f",&arr[i][j]);
        }
    }
    for(int i=0;i<12;i++){
        sum+=arr[i][a];
    }
    float ava=sum/12.0;
    if(str[0]=='S')
    printf("%.1f\n",sum);
    else if(str[0]=='M')
    printf("%.1f\n",ava);

    return 0;
}
