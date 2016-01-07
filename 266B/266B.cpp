#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
      int n,t,i,k;
      scanf("%d%d",&n,&t);
      char a[n],j;
      scanf("%s",a);
      for(k=0;k<t;k++){
          for(i=0;i<n;i++)
              if(a[i]=='B'&&a[i+1]=='G'){
                  j = a[i];
                  a[i]= a[i+1];
                  a[i+1]=j;
                  i++;
                  }
              }
      printf("%s",a);
      return 0;
 }