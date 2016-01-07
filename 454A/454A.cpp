#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    k=n/2;
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            if(j<=n/2){
            if((i>=(n/2-j))&&(i<=(n/2+j)))
                printf("D");
            else 
                printf("*");
                }
            else{
                if((i>=(j-n/2))&&(i<=(n-1-j+n/2)))
                printf("D");
            else 
                printf("*");          
            }
        }
        if(j<n-1)
        printf("\n");
    }
    return 0;
}