#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];        
    }
    int mini=a[0],maxi=a[0]+1,ans=1,sol=2,off=0;
    for(i=1;i<n;i++){
        if(a[i]==mini||a[i]==maxi){
            ans++;
            sol = max(sol,ans);
        }
        else{
            mini = min(a[i],a[i-1]);
            maxi = max(a[i],a[i-1]);
            ans = 2+off;
        }    
        if(a[i]==a[i-1]){
            off++;
        }   
        else
            off=0; 
    }
    cout<<sol;
    return 0;
}