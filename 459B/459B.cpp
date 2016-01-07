#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int i,d;
    unsigned long long x,c1=1,c2=1,n;
    scanf("%lld",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(a[i]!=a[i+1])
            break;
        c1++;
    }
    for(i=n-1;i>=0;i--){
         if(a[i]!=a[i-1])
             break;
         c2++;
    }
    d = a[n-1]-a[0];
    x = c1*c2;
    if(d!=0)
        printf("%d %lld",d,x);
    else {
        x=n*(n-1)/2;
        printf("%d %lld",d,x);
    }
    return 0;
}