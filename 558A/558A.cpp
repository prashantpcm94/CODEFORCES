#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<int,int>&f,const pair<int,int>&s){
    return f.first<s.first;
}
int main(){   
    int n,i,l,r,c1=0,c2=0;
    cin>>n; 
    pair<int,int> p1[n],p2[n];
    for(i=0;i<n;i++){
        cin>>l>>r;
        if(l<0){
            l*=-1; 
            p1[c1].first=l;
            p1[c1++].second=r;
        }
        else{
            p2[c2].first=l;
            p2[c2++].second=r;
        }
    }
    sort(p2,p2+c2,compare);    
    sort(p1,p1+c1,compare);
    int ans=0;
    for(i=0;i<min(c1,c2);i++){
        ans += p2[i].second+p1[i].second;
    }
    if(c1<c2){
        ans += p2[i].second;
    }
    else if(c2<c1){
        ans += p1[i].second;
    }
    cout<<ans;
    return 0;
}