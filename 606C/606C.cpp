#include<iostream>
using namespace std;
int n,k,a,l[100001];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        l[k]=l[k-1]+1;
        a=max(a,l[k]);
    }
    cout<<n-a<<endl;
}