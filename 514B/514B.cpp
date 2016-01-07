#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n,i,j,c=0,x,y;
    std::pair<long long,long long> p0;
    scanf("%lld %lld %lld",&n,&p0.first,&p0.second);
    std::pair<long long,long long> p[n];
    long long a[n];
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++){
        scanf("%lld %lld",&p[i].first,&p[i].second);
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            a[i]++;
            c++;
            for(j=i+1;j<n;j++){
                if(a[j]==0){
                    x=(p[j].second-p0.second)*(p[i].first-p0.first);                    
                    y=(p[i].second-p0.second)*(p[j].first-p0.first);
                    if(x==y){
                        a[j]=1;
                    }
                }
            }
       }
    }
    printf("%lld",c);
    return 0;
}