#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
bool pairCompare(const std::pair<int,int>& firstElem, const std::pair<int , int>& secondElem) {
  return firstElem.first < secondElem.first; 
}
int main(){
    int n,m,sum=0,c=0,k,i;
    scanf("%d%d",&n,&k);
    std:: pair<int,int> p[n];
    for(i=0;i<n;i++){        
        scanf("%d",&p[i].first);  
        p[i].second = i+1;
    }
    sort(p,p+n,pairCompare);
    for(i=0;i<n;i++){
        if(k>=p[i].first){
            k -= p[i].first;
            c++;
        }
        else
            break;
    }
    printf("%d\n",c);
    for(i=0;i<c;i++){
        printf("%d ",p[i].second);
    }
    return 0;
}