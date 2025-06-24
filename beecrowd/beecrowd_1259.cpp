#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,i,j,temp;
   cin>>a;
  int arr[a];
  for(int i=0;i<a;i++){
    cin>>arr[i];
  }
sort (arr,arr+a);
 
 for(int i=0;i<a;i++)
   {
      if(arr[i]%2==0)
      cout<<arr[i]<<endl;

   }
    for(int i=a-1;i>=0;i--)
   {
      if(arr[i]%2!=0)
      cout<<arr[i]<<endl;

   }
   

return 0;

}