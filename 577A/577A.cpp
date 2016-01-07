#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0,x,i;
    scanf("%d %d",&n,&x);
    for(i=1;i<=n;i++){
        if(x%i==0&&(x/i)<=n){
            c++;
        }
    }
    cout<<c;
    return 0;
}