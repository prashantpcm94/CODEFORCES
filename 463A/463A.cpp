#include<iostream>
#include<algorithm>
using namespace std;
bool pairCompare(const std::pair<int,int>& firstElem, const std::pair<int , int>& secondElem) {
    if( firstElem.first ==secondElem.first){
        return firstElem.second < secondElem.second;
    }
    else
      return firstElem.first < secondElem.first; 
}
int main(){
    int n,s,i,min=100;
    cin>>n>>s;
    std::pair<int,int> p[n];
    for(i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n,pairCompare);
    i=0;
    while(p[i].first<=s){
        if(min>p[i].second&&p[i].second!=0&&p[i].first!=s)
            min = p[i].second;
        i++;
    }
    if(p[0].first==s){
            if(p[0].second>0)
                cout<<-1;
            else
                cout<<0;
    }
    else if(i==0&&p[0].first>=s){        
            cout<<-1;        
    }
    else if(i==0&&p[0].second==0&&p[0].first==s)
            cout<<0;
        else
            cout<<100-min;
    return 0;
}