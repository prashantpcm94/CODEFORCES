#include<stdio.h>
int main(){
    int n,i,k,c1=0,c2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        if(k==0)
            c1++;
        else 
            c2++;
    }
    if(c1==0)
        printf("-1");
    else{
        if(c2<9)
            printf("0");
        else{
        c2= c2 - c2%9;
        for(i=0;i<c2;i++)
            printf("5");
        for(i=0;i<c1;i++)
            printf("0");          
        }
    }
    return 0;
}