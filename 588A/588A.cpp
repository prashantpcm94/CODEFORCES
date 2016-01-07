#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,min=INT_MAX,i;
    cin>>n;
    long long a,b,ans=0;
    for(i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        if(min>b)
            min = b;
        ans += min*a;
    }
    cout<<ans;
    return 0;
}