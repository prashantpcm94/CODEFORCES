#include<stdio.h>
#include<string.h>
int main(){
    int n,S,i;
    scanf("%d",&n);
    S=n;
    for(i=0;i<=n;i++)
        S +=(n-i)*i;
    printf("%d",S);
    return 0;
    }