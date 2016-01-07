#include<stdio.h>
int main(){
    int x,i,sum=0;
    for(i=0;i<5;i++){
        scanf("%d",&x); 
        sum +=x;
    }
    if(sum%5==0&&sum!=0)
           printf("%d",sum/5);
    else     
        printf("-1");
    
    return 0;
}