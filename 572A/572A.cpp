#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    int n1,n2,k,m;    
    scanf("%d %d",&n1,&n2);
    scanf("%d %d",&k,&m);    
    int a[n1],b[n2],i;
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    if(k>n1||m>n2){
        printf("NO");
        return 0;
    }
    if(a[k-1]<b[n2-m]){
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}