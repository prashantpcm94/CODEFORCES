#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n,greater<int>());
    for(i=0;i<n;i++){
        if(5-a[i]>=k)
            break;
    }
    printf("%d",(n-i)/3);
    return 0;
}