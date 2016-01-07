#include<stdio.h>
int main(){
    int n,i,j,k,count=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
        }
    for(i=0;i<n;i++){
            for(j=0;j<n-1;j++){
                if(a[j]>a[j+1]){    
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
                }
                }
                }
    
    for(i=0;i<n;i++)
        if(b[i]==a[n-1])
            break;
    for(k=n-1;k>=0;k--)
        if(b[k]==a[0])
            break;
    if(k>i)
        count=n-k+i-1;
    if(k<i)
        count=n-k+i-1-1;                   
    printf("%d",count);
    return 0;
}