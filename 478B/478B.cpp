#include<stdio.h>
int main(){
    int n,m,a,b;
    unsigned long long k,max,min,x,c;
    scanf("%d%d",&n,&m);
    k = n/m;
    x = n%m;   
    if(k>=2)
        min = (m-x)*((k*(k-1))/2) + x*((k*(k+1))/2) ;
    else if(k==1){
            min = x;
    }
    //printf("%d",x);
    k = n-m + 1;
    max = ((k*(k-1))/2) ;
    printf("%lld %lld",min,max);
    return 0;
}