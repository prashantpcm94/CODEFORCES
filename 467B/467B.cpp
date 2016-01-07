#include<stdio.h>
int main(){
    int n,m,k,i,x,count=0,sum=0;
    scanf("%d%d%d",&n,&m,&k);
    int a[m+1];
    for(i=0;i<m+1;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
        x = a[m]^a[i];
        count= 0;
        while(x>0){
            if(1 == (x&1)) count++;
            x >>= 1;
        }
        if(count<=k)
            sum++;
    }
    printf("%d",sum);       
    return 0;
}