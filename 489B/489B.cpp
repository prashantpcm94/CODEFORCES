#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i,m,count=0,min,j;
    scanf("%d\n",&n);
    int b[n];
    min=n;
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    scanf("%d\n",&m);
    if(m<min)
        min=m;
    int g[m];
    for(i=0;i<m;i++){
        scanf("%d",&g[i]);
    }
    sort(b,b+n);
    sort(g,g+m); 
    i=0;j=0;
    while(i<n&&j<m){
        if(abs(b[i]-g[j])<=1){
            count++;
            i++;
            j++;
        }
        else if(b[i]<g[j]){
            i++;
        }
        else
            j++;
    }  
    printf("%d\n",count);
    return 0;
}