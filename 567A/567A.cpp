#include<stdio.h>
#include<limits.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],maxi[n],mini[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    maxi[0] = a[n-1]-a[0];
    mini[0] = a[1]-a[0];
    maxi[n-1] = a[n-1]-a[0];
    mini[n-1] = a[n-1]-a[n-2];
    for(i=1;i<n-1;i++){
        maxi[i] = max(a[i]-a[0],a[n-1]-a[i]);
        mini[i] = min(a[i]-a[i-1],a[i+1]-a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d %d\n",mini[i],maxi[i]);
    }
    return 0;
}