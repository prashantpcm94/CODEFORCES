#include<stdio.h>
int max(int,int);
int main(){
    int n,a,b,h;
    scanf("%d%d%d",&n,&a,&b);
    h =n- max(a+1,n-b) + 1;
    printf("%d",h);                
    return 0;
}
int max(int a,int b){
    if(a>=b)
        return a;
    else 
        return b;
}