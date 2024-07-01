#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    char str[2];
    int a=1;
    cin>>str;
    double arr[12][12],sum=0.0;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>arr[i][j];
        }`
    }
    for(int i=1;i<12;i++){
        for(int j=0;j<a;j++){
 sum=sum+arr[i][j];
        }
        a++;
    }
if(str[0]=='S') printf("%.1lf\n",sum);
else if(str[0]=='M') printf("%.1lf\n",sum/66.0);
return 0;

}