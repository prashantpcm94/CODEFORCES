#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int j=0,k=0,i;
    scanf("%s%s",a,b);
    for(i=0;i<strlen(a);i++){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
        if(a[i]==b[i])
            continue;
        if(a[i]>b[i]){
            printf("1");
            break ;
            }
        if(a[i]<b[i]){
            printf("-1");
            break ;
            }         
    }
    if(i==strlen(a))
        printf("0");
    return 0;        
}