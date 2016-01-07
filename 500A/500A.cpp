#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n,m,c=1;
    scanf("%d%d",&n,&m);
    int a[n+1],i;
    a[0]=0;
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
    }
    c=1;i=1;
    while(c<m){
        c = i+a[i];
        i = c;
    }
    if(i==m)
        printf("YES");
    else
        printf("NO");
    return 0;
}