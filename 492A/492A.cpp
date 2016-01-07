#include<stdio.h>
int main(){
    int n,i,k,sum=0;
    scanf("%d",&n);
    for(i=1;sum<n;i++){
        k = i * (i+1);
        k /=2;
        sum += k;
    }
    if(sum<=n)
        printf("%d",i-1);
    else
        printf("%d",i-2);
    return 0;
}