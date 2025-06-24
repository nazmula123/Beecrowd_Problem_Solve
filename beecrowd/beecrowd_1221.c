#include<stdio.h>
void prime(long long int a,long long int b);
int main(){
long long int a;
scanf("%lld",&a);
long long int arr[a];
for(int i=0;i<a;i++)
{
    scanf("%lld",&arr[i]);
    prime(arr[i],a);
}

}
void prime(long long int a,long long int b){

if(a==1|| a==0)
printf("Not Prime\n");
else {
       int count =1;
        for(int i=2;i<b;i++){
                {

            if(a%i==0)

            count=0;
            }
        }
            if(count)
                printf("Prime\n");
            else
                printf("Not Prime\n");
}
}