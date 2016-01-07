#include<stdio.h>
int main()
{
    int k,l,m,n; long int d;
    int a,b,c,e;
    int i=0,count=0;
    scanf("%d%d%d%d%ld",&k,&l,&m,&n,&d);
    a=k;b=l;c=m;e=n;
    for(i=1;i<=d;i++){
        if(i>k)
             k +=a;
        if(i>l)
             l +=b;
        if(i>m)
             m +=c;
        if(i>n)
             n +=e;
        if(i==k){
            count++;
            continue;
            }
        if(i==l){
            count++;            
            continue;
            }
        if(i==m){
            count++;
            continue;
            }
        if(i==n){
            count++;
           continue;
            }         
       }
       printf("%d",count);
       return 0;
    }