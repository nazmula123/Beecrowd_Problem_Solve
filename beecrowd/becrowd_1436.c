#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
for(int j=0;j<a;j++){
int b;
scanf("%d",&b);
int sum,sum1;
int arr[b];
for(int i=0;i<b;i++){
    scanf("%d",&arr[i]);
}
if(b%2==0){
 sum=b/2;
    printf("Case %d: %d\n",j+1,arr[sum]);
    
}
else if (b%2!=0)
{ sum=b/2;
 
    printf("Case %d: %d\n",j+1,arr[sum]);
}

}
return 0;
}
