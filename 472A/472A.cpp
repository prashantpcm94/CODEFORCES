#include <stdio.h>
int main(){
    int n,flag=0;
    scanf("%d",&n);    
    int i,x=2;
    while(!flag){
        x +=2;
        //printf("%d\n",n-x);
        for(i=2;i<=(n-x)/2;++i){
            if((n-x)%i==0){
                flag=1;
                break;
            }
         }         
    }
    printf("%d %d",x,n-x);
    return 0;
}