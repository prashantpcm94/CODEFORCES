#include<iostream>
using namespace std;
int main(){
    int n,m,i,c=0,ans=0,l1,l2;
    cin>>n>>m;
    for(i=0;i<=n;i++){
        c  = i;
        l1 = (n-i);
        l2 =  m-i*2;
        if(l2>=0){
            c += min(l1/2,l2);
            if(ans<c)
                ans = c;
        }        
    }
    cout<<ans;
    return 0;
}