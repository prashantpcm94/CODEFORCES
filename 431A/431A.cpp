#include<stdio.h>
#include<string.h>
int main(){
    int cal=0,a[4],i,k;
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    char c[100000];
    scanf("%s",c);
    for(i=0;i<strlen(c);i++){
        k = c[i]- '0' ;   
        cal += a[k-1];
    }
    printf("%d",cal);
    return 0;
}