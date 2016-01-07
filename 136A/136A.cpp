#include<stdio.h>
int main(){
      int n,i,k;
      scanf("%d",&n);
      int a[n],b[n];
      for(i=0;i<n;i++){
          scanf("%d",&a[i]);
          k = a[i];
          b[k-1]=i;
          }
      for(i=0;i<n;i++)
          printf("%d ",b[i]+1);
      return 0;
      }