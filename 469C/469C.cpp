#include<stdio.h>
int main(){
    int n,i,count = 0;
    scanf("%d",&n);
    if(n<4){
        printf("NO");
        return 0;
    }
    else
        printf("YES");
    if(n%2==0){
        printf("\n4 * 3 = 12");
        printf("\n2 * 12 = 24");
        printf("\n24 * 1 = 24");
        for(i=5;i<=n;i+=2){
            printf("\n%d - %d = 1 ",i+1,i);
            count++;
        }
        count = n - 5 - count;
        while(count>0){
            count--;
            printf("\n1 * 1 = 1 ");
        }
        if(n>=5)
        printf("\n24 * 1 = 24");
    }
    else{
        printf("\n5 - 1 = 4");
        printf("\n4 - 2 = 2");
        printf("\n4 * 3 = 12");
        printf("\n2 * 12 = 24");
        for(i=6;i<=n;i+=2){
            printf("\n%d - %d = 1 ",i+1,i);
            count++;
        }
        count = n - 6 - count;
        while(count>0){
            count--;
            printf("\n1 * 1 = 1 ");
        }
        if(n>=6)
        printf("\n24 * 1 = 24");
    }
    return 0;
}