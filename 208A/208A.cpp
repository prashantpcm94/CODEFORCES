#include<stdio.h>
#include<string.h>
int main(){
   int i,j,k;
   char a[201],b[201];
   scanf("%s",a);
   for(i=0,j=0;i<strlen(a);){
       
       if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'){
           i=i+3;
           if(a[i]!='W'||a[i+1]!='U'||a[i+2]!='B'){
               b[j]=' ';
               j++;
           }
           }
      else{
           b[j]=a[i];
           j++;i++;} 
       
              }  
    b[j]=NULL;
    if(b[0]!=' ')
    printf("%s",b);
    else
        for(j=1;j<strlen(b);j++)
            printf("%c",b[j]);
    return 0;
    }