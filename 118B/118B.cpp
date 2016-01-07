#include<stdio.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(k=n;k>i;k--)
           printf("  ");
        for(k=0;k<=i;k++){
            printf("%d",k);
            if(k<i)
                printf(" ");
                }
            k=k-2;
        for(;k>=0;k--)
            printf(" %d",k);
            
        printf("\n");
        }
    for(i=0;i<n;i++){
        for(k=0;k<=i;k++)
            printf("  ");
        for(k=0;k<n-i;k++){
            printf("%d",k);
            if(i!=n-1&&k!=n-i-1)
                printf(" ");
                }
        k=k-2;
        for(;k>=0;k--)
            printf(" %d",k);
            
        printf("\n");
        }
        return 0;
}