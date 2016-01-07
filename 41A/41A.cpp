#include<stdio.h>
#include<string.h>
int main(){
    char a[101],b[101];
    gets(a);
    gets(b);
    strrev(a);
    if(strcmp(a,b)==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}