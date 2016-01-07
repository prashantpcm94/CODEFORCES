#include<stdio.h>
#include<string.h>
int main(){
   char a[200],b[200],c[200];
   int k,j=0,l=0;
   scanf("%s",a);
  
       for(k=0;a[k]!=NULL;k++){
       a[k]=tolower(a[k]);
           
       if(a[k]=='a'||a[k]=='e'||a[k]=='i'||a[k]=='o'||a[k]=='u'||a[k]=='y')
         a[k]=' ';
       else{
          b[j]=a[k];
          j++; }   
           
   }
   b[j]=NULL;
   j=strlen(b);
   for(k=0;k<(2*j);k++)
   c[k]='.';
   for(k=0;k<j;k++){
        c[(2*k)+1]=b[k];
   } 
       c[2*j]=NULL;    
 printf("%s\n",c);
  
       return 0;
   }