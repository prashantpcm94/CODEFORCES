#include<bits/stdc++.h>
using namespace std;
vector<int> flip(string A) {
    int i,n=A.length(),sum=0,max=0,l=0,maxl,maxr;
    vector<int> x;
    for(i=0;i<n;i++){
        if(A[i]=='0')
            break;
    }
    if(i==n){
        x.push_back(-1);
        x.push_back(-1);        
        return x;
    }
    l=0;
    for(i=0;i<n;i++){
        if(A[i]=='0'){
            sum++;
        }
        else
            sum--;
        if(sum<0){
            sum=0;
            l=i+1;
        }
        if(sum>max){
            max= sum;
            maxl=l+1;
            maxr=i+1;
        }
    }
    x.push_back(maxl);
    x.push_back(maxr);
    x.push_back(max);
    return x;
}
int main(){
    int n,i,sum=0,a;
    vector<int> sol;
    string x;
    cin>>n;
    for(i=0;i<n;i++){    
        cin>>a;
        x+= a+'0';
    }
    sol=flip(x);
//    cout<<sol[0]<<" "<<sol[1]<<endl;
    if(sol[0]==-1){
        cout<<n-1;
        return 0;
    }    
    for(i=0;i<n;i++){
        if(i<sol[0]-1||i>sol[1]-1){
            if(x[i]=='1')
                sum++;
        }        
        else{
            if(x[i]=='0')
                sum++;
        }        
    }   
    cout<<sum;
    return 0;
}