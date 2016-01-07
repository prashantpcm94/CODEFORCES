#include<stdio.h>

int main()
{    
       long long int n,m,i,l;
       scanf("%lld%lld",&n,&m);
       int a[m];
       for(i=0;i<m;i++)
           scanf("%d",&a[i]);
       l=a[0]-1;
        for(i=1;i<m;i++){
          if(a[i]>a[i-1])
           l += a[i]-a[i-1];
              
          if(a[i]<a[i-1])
           l += n-a[i-1]+a[i]; 
              }             
        printf("%lld",l);
        return 0;
        }