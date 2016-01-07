#include<bits/stdc++.h>
using namespace std;
const long long mod=1000000007;
long long _pow(long long a, int b) {
    if(b == 0)
        return 1ll;
    long long ret = _pow(a, b/2);
    ret = (ret*ret) % mod;
    ret = (ret+mod)% mod;
    if(b%2 == 1)
        ret = (ret*a) % mod;
    ret = (ret+mod)% mod;
    return ret;
}
int main(){
    long long n,x,y,ans;    
    cin>>n;
    x = _pow(3,3*n);
    y = _pow(7,n);
    ans = x-y;
    ans += mod;
    ans %= mod;
    cout<<ans;
    return 0;
}