#include<bits/stdc++.h>
using namespace std;
map<string,string> m1,m2;
int main(){
    int n,i;
    cin>>n;
    auto it = m1.begin();
    for(i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        for(it=m1.begin();it!=m1.end();it++){
            if(m1[it->first]==a){
                m1[it->first]=b;                
                break;                
            }
        }
        if(it==m1.end())
            m1[a]=b;
    }    
    cout<<m1.size()<<endl;
    for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }    
    return 0;
}