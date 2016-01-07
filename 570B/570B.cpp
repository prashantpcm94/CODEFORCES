#include <iostream>
#include<string.h>
#include <algorithm>
using namespace std;
int main() {
    long long n,m;
    cin>>n>>m;
    if(n==1){
        cout<<1;
    }
    
    else if(n%2==0){
        if(m<=n/2){
            cout<<m+1;
        }
        else
            cout<<m-1;
    }
    else{        
        if(m==n/2+1){
            cout<<m-1;
        }
        else if(m<=n/2){
            cout<<m+1;
        }
        else
            cout<<m-1;
    }
    return 0;
}