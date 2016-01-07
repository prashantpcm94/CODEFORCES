#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,a[100],f[100],i,j,t,c=2333,d;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    for(i=0;i<m;i++)
        for(j=0;j<m-1;j++)
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                }
       for(i=0;i<=m-n;i++){
        d=i+n-1;
        j=a[d]-a[i];
        if(c>=j)
            c = j;
            }
    printf("%d",c);         
    return 0;
}