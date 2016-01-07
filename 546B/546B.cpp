#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,count=0,temp,i,j;
    scanf("%d",&n);
    int a[n],h[n*10];
    memset(h,0,sizeof(h));        
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);   
        h[a[i]]++;         
    }
    sort(a,a+n);    
    for(i=1;i<n;i++){
        if(a[i]<=a[i-1]){
            temp = a[i]-a[i-1];
            temp = abs(temp);
            a[i] += temp+1;
            count += temp+1;
        }                         
    }       
    
    printf("%d",count);    
    return 0;
}