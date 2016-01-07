#include<stdio.h>
int main(){
    int t,count=0;
    scanf("%d",&t);
    while(t--){
        int p,q;
        scanf("%d%d",&p,&q);
        if(q-p>=2)
            count++;
    }        
        printf("%d",count);       
    return 0;
}