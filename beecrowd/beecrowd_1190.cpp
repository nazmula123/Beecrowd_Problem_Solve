#include<bits/stdc++.h>
using namespace std;
int main(){
 double arr[12][12],sum=0.0;
 
 char str;
 cin>>str;
 for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        cin>>arr[i][j];
    }
 }
 int a=11,b=7;
 for(int i=1;i<11;i++){
    if(i<=5){
    for(int j=a;j<12;j++){
      sum=sum+arr[i][j];
    }
    a--;
    }
    else if(i>=6){
        for(int j=b;j<=11;j++)
        {
            sum=sum+arr[i][j];
        }
        b++;
    }
    

    }
   if(str == 'S') cout << fixed << setprecision(1) << sum << endl;
    else if(str== 'M') cout << fixed << setprecision(1) << sum/30 << endl;;
return 0;

}