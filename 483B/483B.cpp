#include<stdio.h>
int main(){
    unsigned long long x,y,c1,c2,k,k1,s,cx,cy;
    scanf("%lld%lld%lld%lld",&c1,&c2,&x,&y);
    s = x*y;
    k = (c1+c2)*s;
    k /= (s-1);
    cx = k/x;
    cy = k/y;
    //printf("%lld %lld ",cx,cy);  
    k1=k;
    if(c1<cy){
        k = c2*s/(s-x);
        if(k%y==0)
            k--;
    }
    else if(c2<cx){
        k = (c1*s)/(s-y);
        if(k%x==0)
            k--;
    }
    if(k>=c1+c2)
        printf("%lld",k);
    else{
        if(k1%s==0)
            k1--;
        printf("%lld",k1);
    }
    return 0;
}