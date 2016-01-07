#include<stdio.h>
int main(){
    int n,m,count=0,c=0;
    scanf("%d%d",&n,&m);
    while(n>0){
        count += n;
        if(c<m){
            c += n%m;
        }
        n = n/m ;
        if(c>=m){
            n++;
            c = c-m;
        }
            
    }
    printf("%d",count);
    return 0;
}