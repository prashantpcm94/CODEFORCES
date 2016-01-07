#include<stdio.h>
int main(){
    long long a,b,sum=0,t;
    scanf("%lld %lld",&a,&b);    
    while(b!=0){
        sum += a/b;
        t = a;
        a = b;
        b = t%a;
    }
    printf("%lld",sum);
    return 0;
}