#include<stdio.h>
int main(){
    long long int n,k;
    scanf("%lld%lld",&n,&k);
    if(k>n-n/2){
        k-= (n-n/2);
        printf("%lld",2*k);
    } 
    else
        printf("%lld",2*k-1);                   
    return 0;
}