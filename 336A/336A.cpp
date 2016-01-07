#include<stdio.h>
int main(){
    long int x,y,j,k,S;
    scanf("%ld%ld",&x,&y);
    j=x;
    k=y;
    if(x<0)
        j=x*(-1);
    if(y<0)
        k=y*(-1);
    S=j+k;
    if(x>0&&y>0)
        printf("0 %ld %ld 0",S,S);
    if(x>0&&y<0)
        printf("0 %ld %ld 0",S*-1,S); 
    if(x<0&&y>0)
        printf("%ld 0 0 %ld",S*-1,S); 
    if(x<0&&y<0)
        printf("%ld 0 0 %ld",S*-1,S*-1);   
    return 0;
        }