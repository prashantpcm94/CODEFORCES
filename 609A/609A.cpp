#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i;
    cin>>n>>m;
    int a[n],s=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for(i=0;i<n;i++){
        s += a[i];
        if(s>=m)
            break;
    }
    cout<<i+1;
    return 0;
}