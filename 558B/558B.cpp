#include<bits/stdc++.h>
using namespace std;
struct num{
    int count;
    int start;
    int end;
}N[1000001];
bool compare(const struct num &f,const struct num &s){
    if(f.count!=s.count)
        return f.count>s.count;
    else
        return (f.end-f.start)<(s.end-s.start);
}
int main(){   
    int n,i;
    cin>>n; 
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        N[a[i]].count++;
        if(N[a[i]].count==1){
            N[a[i]].start=i+1;
        }
        N[a[i]].end=i+1;
    }   
    sort(N,N+1000001,compare);    
    cout<<N[0].start<<" "<<N[0].end;
    return 0;
}