#include<bits/stdc++.h>
using namespace std;
int ahead[1000001];
int cc[1000001],ca[1000001];
int main(){   
    int n,i,a,b,start,start2;
    cin>>n;
    int ans[n+1];
    for(i=0;i<n;i++){
        cin>>a>>b;
        ahead[a]=b;        
        if(a==0){
            start=b;
        }
        ca[a]++;
        cc[a]++;
        cc[b]++;
    }
    for(i=1;i<=1000000;i++){
        if(cc[i]==1&&ca[i]==1){
            start2=i;
            break;
        }
    }
    for(i=1;i<n;i+=2){
        ans[i] = start;
        start = ahead[start];
    }
    for(i=0;i<n;i+=2){
        ans[i] = start2;
        start2 = ahead[start2];
    }
    for(i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}