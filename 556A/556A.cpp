#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,i,n0=0,n1=0;
    scanf("%d",&n);
    char s[n+100];
    scanf("%s",s);
    for(i=0;i<n;i++){
        if(s[i]=='0')
            n0++;
        else
            n1++;
    }
    printf("%d\n",abs(n0-n1));
    return 0;
}