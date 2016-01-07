#include<stdio.h>
int main(){
    int n,m,a,b,count=0,mr;
    scanf("%d%d%d%d",&n,&m,&a,&b);   
    mr = n/m;
    count = mr * b;
    count += (n%m) * a;
    if(n*a <count)
        count = n*a;
    if((mr+1)*b<count)
        count = (mr+1)*b;
    printf("%d",count);
    return 0;    
}