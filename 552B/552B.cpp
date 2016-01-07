#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
long long _pow(long long x,long long y){
    long long i,ans=1;
    for(i=0;i<y;i++){
        ans = ans*x;
    }
    return ans;
}
int main(){
    long long n,a,c=0,i,ans=0;
    scanf("%lld",&n);
    a=n;
    while(a){
        a /=10 ;
        c++;
    }   
    for(i=1;i<c;i++){
        ans += (9*_pow(10,(i-1))*(i));
    }
    ans += (n-_pow(10,c-1)+1)*c;
    printf("%lld",ans);
    return 0;
}