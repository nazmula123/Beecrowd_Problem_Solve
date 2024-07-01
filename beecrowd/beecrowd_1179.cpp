#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[16],a=0,b=1;
  for(int i=0;i<15;i++){
    cin>>arr[i];
  }
 for(int i=0;i<15;i++){
    
        if(arr[i] %2==0 && i){
          for(int j=a;j<b;j++){
            if(j>=5)
            break;
    printf("par[%d] = %d\n",j,arr[i]);
          }
          a++;b++;
        }
        else {
   for(int j=a;j<b;j++){
            if(j>=5)
            break;
    printf("par[%d] = %d\n",j,arr[i]);
          }
          a++;b++;




        }
    
 }
 

 return 0;
 }
