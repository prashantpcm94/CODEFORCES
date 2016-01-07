#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n,m,sum=0;
    scanf("%d%d",&n,&m);
    int a[n],c[m],h[n+1],s[n],i,j=0,l,k;
    memset(h,0,sizeof(h));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d",&c[i]);
        if(h[c[i]]==0){
            s[j]=c[i];j++;
            h[c[i]]++;
        }
    }
    l=j;
    /*for(j=0;j<n;j++){
        printf("%d ",s[j]);
    }
    printf("\n");*/
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(s[j]==c[i]){
                l=s[j];
                for(k=j;k>=1;k--){
                    s[k]=s[k-1];
                    
                }
                s[0] = l;
                break;
            }
            else{
                sum += a[s[j]-1];
                //printf("%d ",sum);
            }
        }/*
        for(j=0;j<n;j++){
            printf("%d ",s[j]);
        }
        printf("\n");*/
    }
    printf("%d",sum);
    return 0;
}