#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,i,n0=0,n1=0,j;
    scanf("%d",&n);
    int a[n+10];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]!=j)
                break;
        }
        if(j==n){
            break;
        }
        for(j=0;j<n;j++){
            if(j%2==0)
                a[j]++;
            else
                a[j]--;
            if(a[j]<0){
                a[j] += n;
            }             
            a[j] %= n;   
        }    
    }
    if(i==n){
        printf("No");
    }
    else
        printf("Yes");    
    return 0;
}