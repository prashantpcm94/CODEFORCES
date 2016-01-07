#include<stdio.h>
int main(){
    int n,prev,next,i=0,c=1;
    scanf("%d",&n);
    scanf("%d",&prev);
    while(i<n-1){
        scanf("%d",&next);
        if(prev!=next)
            c++;
        prev=next;
        i++;
    }
    printf("%d",c);   
    return 0;
}