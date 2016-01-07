#include <stdio.h>
#include <math.h>
#include<iostream>
#include<algorithm>
using namespace std;
bool pairCompare1(const std::pair<int,int>& firstElem, const std::pair<int , int>& secondElem) {
  return firstElem.first > secondElem.first;
 
}
bool pairCompare2(const std::pair<int,int>& firstElem, const std::pair<int , int>& secondElem) {
  return firstElem.second > secondElem.second;
 
}
int main(){
    int n,i;
    unsigned long long max;
    scanf("%d",&n);
    std::pair<int,int> p[n];
    std::pair<int,int> hx;
    std::pair<int,int> hy;
    std::pair<int,int> lx;
    std::pair<int,int> ly;
    for(i=0;i<n;i++){
        scanf("%d%d",&p[i].first,&p[i].second); 
    }
    sort(p,p+n,pairCompare1);
    hx = p[0];lx = p[n-1];
    sort(p,p+n,pairCompare2);
    hy = p[0];ly = p[n-1];
    
    max = abs(hx.first-lx.first);
    
    if(max<abs(hy.second-ly.second))
        max = abs(hy.second-ly.second);
    printf("%lld",max*max);
    return 0;
}