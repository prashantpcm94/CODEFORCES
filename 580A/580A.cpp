#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n],c=1,max=1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        if(a[i]>=a[i-1]){
            c++;
        }
        else{
            c=1;
        }
        if(c>max)
            max = c;
    }
    cout<<max;
    return 0;
}