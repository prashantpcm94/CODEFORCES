#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;    
    cin>>n>>t;
    if(t==10&&n==1){
        printf("-1");
        return 0;
    }
    printf("%d",t);
    if(t==10)
        n--;
    for(i=1;i<n;i++){
        printf("0");
    }   
    return 0;
}