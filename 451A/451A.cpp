#include<stdio.h>
int main(){
    int n,m,count=0;
    scanf("%d%d",&n,&m);
    if(m<n)
       n=m;
    if(n%2==0)
        printf("Malvika");
    else
        printf("Akshat");        
    return 0;
}