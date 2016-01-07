#include <bits/stdc++.h>
using namespace std;
int main(){
   int x,y,x0,y0,n,ct=0,i;
   cin>>x>>y>>x0>>y0;
   map<pair<int,int>,int > M;
   pair<int,int> X;
   X.first=x0;
   X.second=y0;
   string s;
   cin>>s;
   n = s.length();
   for(i=0;i<n;i++){
       if(M[X]==0){
           M[X]++;
           ct++;
           cout<<"1 ";
       }
       else{
           cout<<"0 ";
       }
       if(s[i]=='U'){
           if(X.first>1){
               X.first--;
           }
       }
       if(s[i]=='D'){
           if(X.first<x){
               X.first++;
           }
       }
       if(s[i]=='L'){
           if(X.second>1){
               X.second--;
           }
       }
       if(s[i]=='R'){
           if(X.second<y){
               X.second++;
           }
       }
   }
   cout<<x*y-ct;
   return 0;
}