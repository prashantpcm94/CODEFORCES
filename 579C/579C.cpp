#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000001
int main(){
    long long a,b,x,f=0;
    double ans1=MAX,ans2=MAX,t;        
    scanf("%lld %lld",&a,&b);
    if(a<b){
        cout<<-1;
        return 0;
    }
    if(a==b){
        cout<<b;
        return 0;
    }
    x = a-b;
    if(x>=2*b){
        x = (a-b)/b;        
        if(x%2==0){
            t = x;
            t = (a-b)/t;
            ans1 = t;
        }
        else{     
            x--;       
            t = x;
            t = (a-b)/t;
            ans1 = t;                
        }                   
    }
    x = a+b;
    if(x>=2*b){
        x = (a+b)/b;        
        if(x%2==0){
            t = x;
            t = (a+b)/t;
            ans2 = t;
        }
        else{     
            x--;       
            t = x;
            t = (a+b)/t;
            ans2 = t;                
        }                   
    }
    if(min(ans1,ans2)==MAX){
        cout<<-1;
        return 0;
    }
    cout<<fixed<<std::setprecision(15)<<min(ans1,ans2);
    return 0;
}