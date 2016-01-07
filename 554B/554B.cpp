#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string a[n];
   map<string,int> m;
   for(int i=0;i<n;i++){
       cin>>a[i];
       if(m.find(a[i])==m.end()){
           m[a[i]]=1;
       } else {
           m[a[i]]++;
       }
   }
   int max=-1;
   for(int i=0;i<n;i++) {
       if(max<m[a[i]]){
           max=m[a[i]];
       }
   }
   cout<<max;
}