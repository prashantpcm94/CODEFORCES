#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,bx,m,by;
    cin>>n>>bx;
    long long a=0,b=0,x;
    for(int i=n-1;i>=0;i--){
        cin>>x;
        a = a*bx+x;
    }
    cin>>m>>by;    
    for(int i=m-1;i>=0;i--){
        cin>>x;
        b = b*by+x;
    }
    if(a<b)
        cout<<'<';
    else if(a>b)
        cout<<'>';
    else
        cout<<'=';
    return 0;
}