#include<bits/stdc++.h>
using namespace std;
int main()
{

 int a;
 while (1)
 {  
    int a;
    cin>>a;
    if(a==0)
 break;
  
  int sum=0;
if(a%2==0){
  
for(int i=0;i<5;i++){
sum=sum+a;
a=a+2;
}
cout<<sum<<endl;
}
else{
a=a+1;
for(int i=0;i<5;i++){
    sum+=a;
    a+=2;
}

cout<<sum<<endl;
}
}

return 0;
 }
 