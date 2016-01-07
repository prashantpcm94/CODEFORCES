#include<stdio.h>
int main(){
    int n,k,i=1,c=1,max;
    scanf("%d%d",&n,&k);
    max = k+1;
    printf("1 ");
    while(k){
        if(c%2!=0){
            printf("%d ",i+k);
            i +=k;
        }
        else{
            printf("%d ",i-k);
            i -= k;
        }
        c++;
        k--;
    }
    while(max<n){
        printf("%d ",++max);
    }
    return 0;
}