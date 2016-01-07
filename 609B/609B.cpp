#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,i,x,ans=0;
    cin>>n>>m;
    long long a[m+1];
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    for(i=1;i<=m;i++){
        ans += a[i]*(n-a[i]);
    }
    cout<<ans/2;
    return 0;
}