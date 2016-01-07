#include<stdio.h>
int main(){
    int i,n,j,t;
    scanf("%d",&n);
    int a[n];
    for(i=0,j=0;i<n;i++)
        scanf("%d",&a[i]);           
    for(i=0;i<n;i++)
        for(j=0;j<n-1-i;j++)
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
}
    t=a[0];
    a[0]=a[n-1];
    a[n-1]=t;
    for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
        printf("%d ",a[n-1]);
    return 0;
    }