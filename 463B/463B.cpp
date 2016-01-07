#include<stdio.h>
int main(){
    int n,s=0,e=0,d;
    scanf("%d",&n);
    int a[n+1],i;
    a[0]=0;
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        d = a[i]-a[i-1];
        if(e-d<0){
            s += (e-d) *-1 ;
            e = 0;
        }
        else
            e = e-d;
    }
    printf("%d",s);
    return 0;
}