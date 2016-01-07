#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9'){
            printf("YES");
            break;
            }
        }
       
    if(i==strlen(a))
            printf("NO");
    return 0;
    }