#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n); 
    k= 1;   
    for(i=0;i<n;i++){
        for(j=0;j<n/2;j++,k++)
            printf("%d %d ",k,(n*n)-k+1);   
        printf("\n");
    }  
    return 0;
}