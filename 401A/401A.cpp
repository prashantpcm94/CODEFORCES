#include<stdio.h>
int main(){
    int n,l,i,sum=0,x;
    scanf("%d%d",&n,&l);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        sum +=x; 
    } 
    x = 0;
    if(sum<0)
        sum *=-1;
    if(sum!=0){
            x = sum/l + (sum%l!=0);
            printf("%d",x);                       
    }
    else
        printf("0");
    return 0;
}