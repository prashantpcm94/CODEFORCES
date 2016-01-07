#include<stdio.h>
int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int a[n],i,count=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            if(m>0)
                m--;
            else
                count++;
        }
        else{
            if(k>0)
                k--;
            else if(m>0)
                m--;
            else
                count++;
        }
    }
    printf("%d",count);
    return 0;   
}