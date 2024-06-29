#include<stdio.h>
long long int fact(long long int x);
long long int fabo(long long int x);
int main()
{

long long int a,b;
while (scanf("%lld %lld",&a,&b)!=EOF)
{
     printf("%lld\n",fabo(a)+fact(b));
}
}
long long int fabo(long long int x){
    if(x<=1)
    return 1;
    else return x*fabo(x-1);
}
long long int fact(long long int x){
    if(x<=1)
    return 1;
    else return x*fabo(x-1);
}