#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    while(n){
        if(n%2!=0){
            c++;
        }
        n /= 2;
    }
    cout<<c;
    return 0;
}