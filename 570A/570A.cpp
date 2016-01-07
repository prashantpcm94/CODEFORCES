#include <iostream>
#include<string.h>
#include <algorithm>
using namespace std;
int main() {
    long long n,m;
    cin>>n>>m;
    long long a[n+5],i,j,max=0,maxi;
    long long arr[n+5];
    memset(arr,0,sizeof(arr));
    for(i=0;i<m;i++){
        max=0;maxi=0;
        for(j=0;j<n;j++){
            cin>>a[j];
            if(max<a[j]){
                max = a[j];
                maxi=j;
            }
        }
        arr[maxi]++;
    }
    max = 0;maxi=0;
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
            maxi=i;
        }
    }
    cout<<maxi+1;
    return 0;
}