#include<stdio.h>
#include<iostream>
#include<algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n,l,i,d;
    double max;
    scanf("%d %d",&n,&l);
    double a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);    
    for(i=0;i<n-1;i++){
        if((a[i+1]-a[i])>d)    
            d = a[i+1]-a[i];
    }
    max = d;
    max /= 2;
    if(max<l-a[n-1])
        max = l-a[n-1];
    if(max<a[0]-0)
        max = a[0]-0;
        
    std::cout<<std::setprecision(9)<<max;
    return 0;
}