#include<stdio.h>
int main(){
    int n,p,x,i;
    scanf("%d",&n);
    int a[n];  
    for(i=0;i<n;i++){
        a[i]=0;
    }  
    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d",&x);
        a[x-1]=1;
    }
    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d",&x);
        a[x-1]=1;
    }
    for(i=0;i<n;i++){
       if(a[i]==0)
           break;
    } 
    if(i==n)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}