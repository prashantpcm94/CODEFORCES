#include <stdio.h>
#include <math.h>
#include<iostream>
#include<algorithm>
unsigned long long _pow(unsigned long long a, unsigned long long b) {
    if(b == 0)
        return 1ll;
    unsigned long long ret = _pow(a, b/2);
    ret = (ret*ret) ;
    if(b%2 == 1)
        ret = (ret*a);
    return ret;
}
int main(){
    unsigned long long h,n,i,l,c=0,j;
    scanf("%lld%lld",&h,&n);  h++; 
    int a[10000],b[h];
    l=n-1+_pow(2,h-1);    
    for(i=0;i<10000;i++){    
        a[i]=(i+1)%2;
    }
    for(i=h;i>0;i--){
        b[i-1]=l%2;
        l /= 2;
    }
    j=0;
    for(i=0;i<h;i++,j++){
        if(a[j]!=b[i]){
           c += _pow(2,h-i);
           j++;
        }
        else
            c++;
    }   
    c--;
    printf("%lld\n",c);   
    return 0;
}