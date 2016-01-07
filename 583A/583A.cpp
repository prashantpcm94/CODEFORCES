#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,k;
    cin>>n;
    int a[n+5],b[n+5];
    memset(a,0,sizeof(a));    
    memset(b,0,sizeof(b));    
    for(k=0;k<n*n;k++){
        cin>>i>>j;
        if(a[i]==0&&b[j]==0){
            a[i]=b[j]=1;
            printf("%d ",k+1);
        }                
    }    
    return 0;
}