#include<stdio.h>
unsigned long long find_gcd(unsigned long long a,unsigned long long b){
     if(a%b==0)
       return b;
     else
       find_gcd(b,a%b);
}
int main(){
    unsigned long long a,b,i,j,k;
    int flag=1;
    scanf("%lld%lld",&a,&b);
    for(i=a;i<b-1&&flag;i++){
        for(j=i+1;j<b&&flag;j++){
            if(find_gcd(i,j)==1){
                for(k=j+1;k<=b;k++){
                    if(find_gcd(j,k)==1&&find_gcd(i,k)!=1){
                        printf("%lld %lld %lld",i,j,k);
                        flag=0;
                        break;
                    }
                }
            }
        }
    }
    if(flag){
        printf("-1");
    }
    return 0;
}