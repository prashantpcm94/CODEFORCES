#include<stdio.h>
#include<string.h>
int main(){
    char c[101];
    int c1=0,c2=0,i;
    scanf("%s",c);
    for(i=0;i<strlen(c);i++){
        if(c[i]<91)
            c1++;
        else
            c2++;
    }
    if(c2>=c1)
        for(i=0;i<strlen(c);i++)
            c[i] = tolower(c[i]);
    else
        for(i=0;i<strlen(c);i++)
            c[i] = toupper(c[i]);
    printf("%s",c);
    return 0;
}