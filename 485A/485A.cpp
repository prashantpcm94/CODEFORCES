#include <stdio.h>
int main(){
    long long a,m,i;
    scanf("%lld%lld",&a,&m);
    for(i=0;i<100000;i++){
        a += a%m;
        if(a%m==0)
            break;
    }
    if(i==100000)
        printf("No");
    else
        printf("Yes");
    return 0;
}