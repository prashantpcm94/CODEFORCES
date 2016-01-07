#include<stdio.h>
#include<string.h>
int main(){
    int n1,n2,a,b;
    scanf("%d%d%d%d",&n1,&n2,&a,&b);
    if(n1>n2)
        printf("First");
    else
        printf("Second");
    return 0;
}