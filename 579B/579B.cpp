#include<bits/stdc++.h>
using namespace std;
pair<int,int> p[1000010];
int pi[1000010];
int ans[1000];
int main(){
    int n,i,j,val;
    pair<int,int> x;
    scanf("%d",&n);
    memset(pi,0,sizeof(pi));
    memset(ans,0,sizeof(ans));
    for(i=2;i<=2*n;i++){
        x.first=i;
        for(j=1;j<=i-1;j++){
            x.second=j;
            scanf("%d",&val);
            p[val]=x;
            pi[val]=1;
        }
    }
    for(i=1000000;i>=0;i--){
        if(pi[i]){
            if(ans[p[i].first]==0&&ans[p[i].second]==0){
                ans[p[i].first]=p[i].second;
                ans[p[i].second]=p[i].first;                
            }
        }
    }
    for(i=1;i<=2*n;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}