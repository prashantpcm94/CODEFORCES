#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
bool pairCompare(const std::pair<int,int>& firstElem, const std::pair<int , int>& secondElem) {
  return firstElem.second < secondElem.second;
 
}
int main(){
    long long sum,n,r,i,avg,count = 0;
    scanf("%lld %lld %lld",&n,&r,&avg);
    sum = n*avg;
    std::pair<int,int> p[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&p[i].first,&p[i].second);  
        sum -= p[i].first;      
    }    
    
    sort(p,p+n,pairCompare);
    
    i=0;
    while(sum>0&&i<n){
        if(p[i].first<r){
            if(sum>=r-p[i].first){
                sum -= r-p[i].first;
                count += (r-p[i].first)*p[i].second;
            }
            else{
                count += sum * p[i].second;
                sum=0;
            }
        }
        i++;
    }
    printf("%lld",count);
    return 0;
}