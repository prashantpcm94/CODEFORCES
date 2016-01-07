#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
long long _pow(int a, int b) {
    if(b == 0)
        return 1ll;
    long long ret = _pow(a, b/2);
    ret = (ret*ret) ;
    if(b%2 == 1)
        ret = (ret*a);
    return ret;
}
int main(){
    long long n,i,j,l;
    vector<long long> primes;
    cin>>n;
    long long ans[n],c=0;
    if(n==1){
        cout<<0;
        return 0;
    }
    for(i=2;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i)
            primes.push_back(i);
    }
    l = primes.size();
    for(i=0;i<l;i++){
        j=1;
        while(_pow(primes[i],j)<=n){
            ans[c++]=_pow(primes[i],j);
            j++;
        }
    }
    l=c;   
    printf("%lld\n",l);    
    for(i=0;i<l;i++)
        printf("%lld ",ans[i]);
    return 0;
}