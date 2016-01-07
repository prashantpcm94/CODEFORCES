# include <stdio.h>
int main()
{
    int n,i,s,l,c=0;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    l=a[0];s=a[0];
    for(i=1;i<n;i++){
      scanf("%d",&a[i]);
      if(s>a[i]){
          c++;
          s=a[i];
          }
      if(l<a[i]){
          c++;
          l=a[i];
        }  
          }  
    printf("%d",c);
    return 0;
    
}