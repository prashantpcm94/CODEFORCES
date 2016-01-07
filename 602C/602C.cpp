#include<bits/stdc++.h>
using namespace std;
vector<int> adjList[10005],adjList1[10005];
int addEdge(int src,int dest){
    adjList[src].push_back(dest);
    adjList[dest].push_back(src);
}
int addEdge1(int src,int dest){
    adjList1[src].push_back(dest);
    adjList1[dest].push_back(src);
}
int main(){
    int n,m,i,x,y,j,u,v;
    cin>>n>>m;
    if(m==0||m== n*(n-1)/2){
        cout<<-1;
        return 0;
    }
    map<pair<int,int> ,int> M;
    int D[n+10];
    pair<int,int> X;
    for(i=0;i<m;i++){
        cin>>x>>y;
        X.first  = x-1;
        X.second = y-1;
        addEdge(x-1,y-1);
        M[X] = 1;
        swap(X.first,X.second);
        M[X] = 1;
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            X.first  = i;
            X.second = j;
            if(M[X]!=1){
                addEdge1(i,j);
               // cout<<i<<" "<<j<<endl;
            }
        }
    }
    X.first  = 0;
    X.second = n-1;
    queue <int> Q;
    Q.push(0);
    memset(D,-1,sizeof(D));
    D[0]=0;
    if(M[X]==1){
        while(Q.size()){             
            u=Q.front();
            Q.pop();        
            for(i=0;i < adjList1[u].size();i++){
                v=adjList1[u][i];
                if(D[v]==-1){
                    D[v]=D[u]+1;
                    Q.push(v);                         
                }
            }
        }
    }
    else{
        while(Q.size()){             
            u=Q.front();
            Q.pop();        
            for(i=0;i < adjList[u].size();i++){
                v=adjList[u][i];
                if(D[v]==-1){
                    D[v]=D[u]+1;
                    Q.push(v);                         
                }
            }
        }
    }
    cout<<D[n-1];
    return 0;
}