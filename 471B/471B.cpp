#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
bool pairCompare(const std::pair<int,int>& firstElem, const std::pair<int , int>& secondElem) {
  return firstElem.first < secondElem.first;
 
}
int main(){
    int n,i,l=-1,r=-1;
    scanf("%d",&n);
    std::pair<int,int> p[n];
    for(i=0;i<n;i++){
        scanf("%d",&p[i].first);  
        p[i].second =i+1;
    }
    sort(p,p+n,pairCompare);
    for(i=0;i<n;i++){
        if(p[i].first==p[i+1].first&&l==-1){
            l=i;continue;     
        }
        if(p[i].first==p[i+1].first&&r==-1){
            r=i;break;    
        }        
    }
    if(i==n)
        printf("NO");
    else{
        printf("YES\n");
        for(i=0;i<n;i++)
            printf("%d ",p[i].second);
        printf("\n");
        for(i=0;i<l;i++)
            printf("%d ",p[i].second);    
        printf("%d ",p[l+1].second);
        printf("%d ",p[l].second);
        for(i=l+2;i<n;i++)
            printf("%d ",p[i].second);
        printf("\n");
        
        for(i=0;i<r;i++)
            printf("%d ",p[i].second);    
        printf("%d ",p[r+1].second);
        printf("%d ",p[r].second);
        for(i=r+2;i<n;i++)
            printf("%d ",p[i].second);
        printf("\n");
    }    
    return 0;
}