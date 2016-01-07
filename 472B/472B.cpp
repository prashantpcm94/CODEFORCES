#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k,i,ans=0;
    scanf("%d%d",&n,&k);    
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        a[i]--;
    }
    sort(a,a+n,greater<int>());
    for(i=0;i<n;i+=k){   
            ans += a[i]*2;
    }
    printf("%d",ans);
    return 0;
}