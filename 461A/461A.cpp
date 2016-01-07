#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];  
    for(i=0;i<n;i++){
       cin>>a[i];
    }
    long long s[n],sum=0;
    sort(a,a+n);
    for(i=0;i<n;i++){
        sum += a[i];
    }
    if(n>2){
        s[0]=s[1]=sum;
        for(i=2;i<n;i++){
            s[i] = s[i-1]-a[i-2];
        }
        sum =0;
        for(i=0;i<n;i++){
            sum += s[i];
        }
    }
    else{
        sum =a[0];
        if(n==2)
            sum += a[1]*2 + a[0];
    }
    cout<<sum;
    return 0;    
}