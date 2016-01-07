#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,s,max=INT_MIN,i,r=1,c=0,j;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }        
    vector<long long> x;
    s = sqrt(n);
    for(i=1;i<=s;i++){
        if(n%i==0){
            x.push_back(i);
            c++;
            if(i*i!=n){
                x.push_back(n/i); 
                c++;
            }                             
        }
    }
    sort(x.begin(),x.end());    
    for(i=c-1;i>=0;i--){
        for(j=i;j>=0;j--){
            if(x[i]%x[j]==0){
                r = sqrt(x[j]);
                if(r*r==x[j]){
                    break;
                }
            }
        }
        if(j==0){
            break;;
        }
    }  
    cout<<x[i];  
    return 0;
}