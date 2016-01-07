#include<stdio.h>
int main(){
    int a,b,s,i;
    scanf("%d%d",&a,&b);
    s=a;
    while(a>=b){
        s+=a/b;
        i=a%b;
        a=a/b+i;
    }
    printf("%d",s);   
    return 0;
}