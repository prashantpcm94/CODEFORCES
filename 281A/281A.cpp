#include<stdio.h>
#include<conio.h>
int main(){
      char a[1000];
      scanf("%s",a);
      a[0]=toupper(a[0]);
      printf("%s",a);      
      return 0;
 }