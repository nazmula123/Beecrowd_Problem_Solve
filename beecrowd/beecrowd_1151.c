#include<stdio.h>
int fabo(int a);
int main()
{
   int a;scanf("%d",&a);
   for(int i=0;i<a;i++){
    if(i==0){
        printf("0");
    }
    else{
    printf(" %d",fabo(i));
}
}
printf("\n");
return 0;
}
int fabo(int a){
    if(a<=1) return a;
    else return fabo(a-1)+fabo(a-2);
}