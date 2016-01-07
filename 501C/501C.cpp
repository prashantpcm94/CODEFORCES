#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,c;
    cin>>n;
    vector<pair<int,int> > v;
    queue<int> q;
    pair<int,int> x,y,sol[n];
    for(i=0;i<n;i++){
        cin>>x.first>>x.second;
        v.push_back(x);
        if(v[i].first==1){             
            q.push(i);
        }
    }
    i=0;
    while(!q.empty()){
        c = q.front();          
        q.pop(); 
        if(v[c].first==0){
            continue;
        }
        sol[i].first = c;
        sol[i++].second = v[c].second;
        v[c].first--;
        v[v[c].second].first--;
        v[v[c].second].second ^= c;
        if(v[v[c].second].first==1){
            q.push(v[c].second);               
        }
    }      
    n = i;  
    cout<<n<<endl;
    for(i=0;i<n;i++){
        cout<<sol[i].first<<" "<<sol[i].second<<endl;
    }
    return 0;
}