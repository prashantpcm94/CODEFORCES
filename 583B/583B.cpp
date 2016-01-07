#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,ans=0,c=0,sum=0,f=0,j;
    cin>>n;
    int a[n+5],h[n+5];
    memset(h,0,sizeof(h));
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        f=0;
        for(j=0;j<n;j++){
            if(h[j]==0){                
                if(a[j]<=sum){
                    sum++;
                    h[j]=1;
                }
                else
                    f=1;
            }
        }
        if(f==1){
            c++;f=0;
            for(j=n-1;j>0;j--){
                if(h[j]==0){                
                    if(a[j]<=sum){
                        sum++;
                        h[j]=1;
                    }
                    else
                        f=1;
                }
            }
        }
        if(f==0){
            break;
        }
        else
            c++;
    }
    cout<<c;
    return 0;
}