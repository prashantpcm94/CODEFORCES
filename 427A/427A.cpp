#include<stdio.h>
int main(){
    int n,crimes=0,hire=0,x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>0)
            hire+=x;
        else
            crimes++;  
        if(hire>0&&x<0){
            hire--;
            crimes--;
        } 
    }
    printf("%d",crimes);
    return 0;
}