#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    int n,t,f,i=0,j=0,k,min;
    unsigned long long S1=0,S2=0;
    scanf("%d",&t);
    int s1[1000006],s2[1000006];
    while(t--){
        scanf("%d",&n);
        if(n>0){
            f=1;
            s1[i]=n;
            i++;
            S1 += n;
        }
        else{
            f=2;
            n *= -1;
            s2[j]=n;
            j++;
            S2 += n;
        }
    }
    if(S1>S2){
        printf("first");
            return 0;
    }
    else if(S2>S1){
        printf("second");
            return 0;
    }
    min=i;
    if(min>j)
        min=j;
    for(k=0;k<min;k++){
        if(s1[k]>s2[k]){
            printf("first");
            return 0;
        }            
        else if(s2[k]>s1[k]){
            printf("second");
            return 0;
        }
    }
    if(i==j){
        if(f==1)
            printf("first");
        else
            printf("second");
    }
    else if(i>j){
        printf("first");
    }
    else
        printf("second");
    return 0;
}