#include<stdio.h>
#include<iostream>
#include<algorithm>
#include <iomanip>
#include<map>
using namespace std;
bool pairCompare(const std::pair<pair<char,int>,int>& firstElem, const std::pair<pair<char,int>,int>& secondElem) {
  return firstElem.second < secondElem.second;
 
}
int main(){
    char s1[30],s2[30];
    scanf("%s\n%s\n",s1,s2);
    int n,t,p,i=0,j;
    char team,card;
    scanf("%d",&n);
    map < pair<char,int>, pair<int,int> > pl;
    pair<char,int> x;
    pair<int,int> y;
    pair<pair<char,int>,int> ans[100];
    while(n--){
        scanf("%d %c %d %c\n",&t,&team,&p,&card);
        
        x.first=team;x.second=p;
        if(card=='y')
            y.first=1;
        else
            y.first=2; 
        y.second = t;                    
        if(pl.find(x)==pl.end()){
           pl[x] = y; 
           if(y.first==2){
               pl[x]=y;
               ans[i].first=x;
               ans[i].second = t;
               i++;
           }
        }
        else{
           if(pl[x].first==1){
               y.first=2;
               pl[x]=y;
               ans[i].first=x;
               ans[i].second = t;
               i++;
           }
        }
    }    
    sort(ans,ans+i,pairCompare);
    for(j=0;j<i;j++){
        if(ans[j].first.first=='a'){
            printf("%s ",s2);
        }
        else
            printf("%s ",s1);
         printf("%d %d\n",ans[j].first.second,ans[j].second);
    }
    return 0;
}