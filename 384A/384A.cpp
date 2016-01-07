#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int x;
    x = n*n;
    x = x/2 + x%2;
    printf("%d\n",x);
    for(i=0;i<n;i++){ 
        for(j=0;j<n;j++){
            if(i%2==0){
                if(j%2==0)
                    printf("C");
                else
                    printf(".");
            }
            else{
                if(j%2!=0)
                    printf("C");
                else
                    printf(".");
            }
        }
        printf("\n");
    }        
    return 0;
}