#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    int bal=0,ans[x.length()],c=0,i;
    for(i=0;i<x.length();i++){
        if(x[i]=='('){
            bal++;
        }
        if(x[i]==')'){
            bal--;
        }
        if(x[i]=='#'){
            ans[c++]=1;
            bal--;
        }
        if(bal<0){
            break;
        }
    }
    if(i!=x.length()||c==0){
        cout<<-1;
    }
    else{
        ans[c-1] += bal;
        int j=0;
        bal = 0;
        for(i=0;i<x.length();i++){
            if(x[i]=='('){
                bal++;
            }
            if(x[i]==')'){
                bal--;
            }
            if(x[i]=='#'){            
                bal-= ans[j++];
            }
            if(bal<0){
                break;
            }
        }
        if(i!=x.length()){
            cout<<-1;
            return 0;
        }
        for(i=0;i<c;i++){
            cout<<ans[i]<<endl;
        }
    }
    return 0;
}