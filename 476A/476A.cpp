#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    float n;
    int m,i;
    scanf("%f%d",&n,&m);
    for(i=ceil(n/2);i<=n;i++){
        if(i%m==0)
            break;
    }
    if(i>n){
        printf("-1");
    }
    else
        printf("%d",i);
    return 0;
}