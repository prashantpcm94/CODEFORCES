#include <bits/stdc++.h>
using namespace std;
bool pairCompare(const std::pair<long long,long long>& firstElem, const std::pair<long long , long long>& secondElem) {
  return firstElem.first < secondElem.first;
 
}
int main() {
    long long n,i,d,l=0,r=0;
    long long s=0,max=0;
    scanf("%lld %lld",&n,&d);
    pair<long long,long long> p[n];
    for(i=0;i<n;i++){
        scanf("%lld %lld",&p[i].first,&p[i].second);
    }
    sort(p,p+n,pairCompare);
    r=1;l=0;
    s = p[0].second;
    while(r<n&&(p[r].first-p[0].first)<d){
        s += p[r].second;
        r++;
    } 
    max = s;
    while(r<n&&l<n){
        s -= p[l].second;
        l++;
        while(r<n&&(p[r].first-p[l].first)<d){
            s += p[r].second;
            r++;
        }        
        if(max<s)
            max =s;     
    }
    cout<<max;
    return 0;
}