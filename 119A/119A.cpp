#include<stdio.h>
int main(){
    int a,b,n;
    int gcd(int ,int);
    scanf("%d%d%d",&a,&b,&n);
    while(1){
        if(gcd(n,a)<=n)
            n -= gcd(n,a);
        else{
            printf("1");
            break;
            }
        if(gcd(n,b)<=n)
            n -= gcd(n,b);
        else{
            printf("0");
            break;
            }
    }
    return 0;
}
int gcd(int n,int a){
    if(a>n&&n!=0){
        a = a+n;
        n = a-n;
        a = a-n;
        }
    int i=1;
    while(i>0){
    i = n%a;
    n = a;
    a = i;   
    }
    return n;
}