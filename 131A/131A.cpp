#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int i,x;
    for(i=0;i<strlen(a);i++){    
        x=a[i];
        if (i && x>=97)
            break;
        }
    
    if (i==strlen(a)){
        for(i=1;a[i]!=NULL;i++)
            a[i]=tolower(a[i]);
    x= a[0];
    if(a[0]>=97)
        a[0]=toupper(a[0]);
    else
        a[0]=tolower(a[0]); 
        }
    printf("%s",a);     
    return 0;
        }