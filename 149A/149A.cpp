#include<stdio.h>
int main(){
    int i,n,j,t,count=0,a[12];
    scanf("%d",&n);
    for(i=0;i<12;i++)
        scanf("%d",&a[i]);
    for(i=0;i<12;i++){
        for(j=0;j<12-i-1;j++)
            if(a[j]<a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                }
 }
    t=0;
    for(i=0;i<12;i++){
        if(t<n){
        t +=a[i];count++;}
        else
            break;
        }
    if(count<=12&&t>=n)
        printf("%d",count);
    else
        printf("-1");
    return 0;
    }