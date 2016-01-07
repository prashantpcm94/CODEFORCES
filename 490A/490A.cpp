#include<bits/stdc++.h>
using namespace std;
int main(){   
    int n,i,x,c1=0,c2=0,c3=0;
    cin>>n; 
    int t1[n+1],t2[n+1],t3[n+1];
    for(i=0;i<n;i++){
        cin>>x;
        if(x==1){
            t1[c1++]=i+1;
        }
        if(x==2){
            t2[c2++]=i+1;
        }
        if(x==3){
            t3[c3++]=i+1;
        }
    }   
    n = min(c1,min(c2,c3));
    cout<<n<<endl;
    for(i=0;i<n;i++){
        printf("%d %d %d\n",t1[i],t2[i],t3[i]);
    }
    return 0;
}