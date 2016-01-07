#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];int i;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<strlen(b);i++){
        if(a[i]==b[i])
            a[i]='0';
        else     
            a[i]='1';
        }    
    a[i]=NULL;
    printf("%s",a);
    return 0;
}