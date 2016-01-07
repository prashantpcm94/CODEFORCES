#include<stdio.h>
int main(){
    int n,m,i,l,u,mid;
    scanf("%d",&n);
    long long int a[n+1];
    long long int x;
    a[0]=1;
    for(i=1;i<=n;i++){
        scanf("%lld",&x);
        a[i] = a[i-1]+x;
    }
    scanf("%d",&m);
    while(m--){
        scanf("%lld",&x);
        l=1;u=n;
        while(l<=u){
            mid=(l+u)/2;    
            if(x<a[mid]&&x>=a[mid-1])
                break;
            else 
                if(x<a[mid])
                    u=mid-1;
            else
                l=mid+1;    
        }
        printf("%d\n",mid);
    }
    return 0; 
}