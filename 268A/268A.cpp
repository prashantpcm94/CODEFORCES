#include<stdio.h>
int main(){
      int n,i,j,h[30],count=0,g[30];
      scanf("%d",&n);
      for(i=0;i<n;i++)
          scanf("%d%d",&h[i],&g[i]);
      for(i=0;i<n;i++)
          for(j=0;j<n;j++)
              if(h[i]==g[j])
              count++;                            
      printf("%d",count);
      return 0;
 }