#include <stdio.h>
#include <math.h>
#include<iostream>
#include<algorithm>
int main(){
    long long r,x1,y1,x2,y2,d,c=0;
    double x,a;
    scanf("%lld%lld%lld%lld%lld",&r,&x1,&y1,&x2,&y2);
    d = pow((x1-x2),2)+pow((y1-y2),2);    
    x = sqrt(d);
    if(x==0){
        c=0;        
    }
    else if(x<=2*r){
        c = 1;
    }
    else{
        a = x-2*r;
        c = a/(2*r); 
        if((c*2*r)<a)
            c++;
        c++;
    }
    printf("%lld",c);
    return 0;
}