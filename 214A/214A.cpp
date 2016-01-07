#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,max,count=0;
    max = m>n?m:n;
    for(i=0;i<=max;i++)
        for(j=0;j<=max;j++){
            if(i*i+j==n){
                if(i+j*j==m)
                    count++;
            }
        }  
    printf("%d",count);      
    return 0;
}