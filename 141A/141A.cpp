#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i,j;
    scanf("%s%s%s",a,b,c);
    for(i=0;i<strlen(a);i++){
        for(j=0;j<strlen(c);j++)
            if(a[i]==c[j]){
                c[j]='1';
                break;
              }
        if(j==strlen(c))
            break;   
    }   
    if(i==strlen(a)){
        for(i=0;i<strlen(b);i++){
        for(j=0;j<strlen(c);j++)
            if(b[i]==c[j]){
                c[j]='1';
                break;
                }
        if(j==strlen(c))
            break; 
            
    } 
    if(i==strlen(b)){
        for(j=0;j<strlen(c);j++){
            if(c[j]!='1'){
               printf("NO");
               break;
               }
               }
            if(j==strlen(c))
                 printf("YES");
        }
    else
         printf("NO");
        }
    else  printf("NO");
    return 0;

}