#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n,m,na,nb,i,x;
    scanf("%d%d%d",&n,&m,&na);
    int a[n],b[m];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(i=0;i<na;i++){
        scanf("%d",&x);
        a[x]=1;
    }
    scanf("%d",&nb);    
    for(i=0;i<nb;i++){
        scanf("%d",&x);
        b[x]=1;
    }
    for(i=0;i<=10000000;i++){
        if(a[i%n]==1||b[i%m]==1){
            a[i%n]=b[i%m]=1;
        }        
    }
    for(i=0;i<n;i++){
       if(a[i]!=1){
           break;
       }
    }
    if(i<n){
        printf("No");
        return 0;
    }
    for(i=0;i<m;i++){
        if(b[i]!=1){
           break;
       }
    }
    if(i<m){
        printf("No");
        return 0;
    }
    printf("Yes");
    return 0;
}