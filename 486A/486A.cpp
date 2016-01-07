#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    if(n%2==0)
        printf("%lld",n/2);
    else{
        n = 0 -( n/2 + 1);
        printf("%lld",n);
    }
    return 0;
}