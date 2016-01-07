#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0){        
        int i,j;
        i=n%10;
        n=n/10;
        j=n%10;
        if(j<i){
            n=n/10;
            n=n*10+i;
        }        
    }
    printf("%d",n);        
    return 0;
}