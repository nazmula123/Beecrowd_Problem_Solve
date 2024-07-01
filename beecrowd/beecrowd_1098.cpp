#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i,j,a=1.0;
for(i=0.0;i<=2.20;i=i+0.2){
   if(i==0.0 || i==1.0||i>2.0){
    for(j=1.0;j<=3.0;j=j+a){
      cout<<"I="<<fixed<<setprecision(0)<<i<<" J="<<fixed<<setprecision(0)<<j+i<<endl;
    }
   }
    else for(j=1.0;j<=3.0;j=j+1.0){
      
cout<<"I="<<fixed<<setprecision(1)<<i<<" J="<<fixed<<setprecision(1)<<j+i<<endl;
    }
}

}