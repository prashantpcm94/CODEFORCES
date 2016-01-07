#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
struct Order{
    int price;    
    int qty;
}BO[1005],ans1[1005],SO[1005],ans2[1005],ans3[1005];
bool compare(const struct Order & f,const struct Order & s){
    return f.price>s.price;
}
bool compare1(const struct Order & f,const struct Order & s){
    return f.price<s.price;
}
int main(){
    int n,s,i,p,q,B=0,S=0,a1=0,a2=0,a3=0;
    char d;    
    scanf("%d %d\n",&n,&s);
    for(i=0;i<n;i++){
        scanf("%c %d %d\n",&d,&p,&q);
        if(d=='B'){
            BO[B].price = p;
            BO[B++].qty = q;
        }
        else if(d=='S'){
            SO[S].price = p;
            SO[S++].qty = q;
        }
    }
    sort(BO,BO+B,compare);
    sort(SO,SO+S,compare1);   
    if(B>0){ 
        ans1[a1] = BO[0];
        for(i=1;i<B;i++){        
            if(BO[i].price==BO[i-1].price){
                ans1[a1].qty += BO[i].qty; 
            }
            else
                ans1[++a1]=BO[i];
        }
        a1++;
    }
    if(S>0){
        ans2[a2] = SO[0];
        for(i=1;i<S;i++){        
            if(SO[i].price==SO[i-1].price){
                ans2[a2].qty += SO[i].qty; 
            }
            else
                ans2[++a2]=SO[i];
        }
        a2++; 
    }    
    sort(ans1,ans1+a1,compare);
    sort(ans2,ans2+a2,compare1);    
    for(i=0;i<a2&&a3<s;i++){
        ans3[a3++]=ans2[i];
    }
    sort(ans3,ans3+a3,compare);
    for(i=0;i<a3;i++){
        printf("S %d %d\n",ans3[i].price,ans3[i].qty);
    }
    for(i=0;i<a1&&i<s;i++){
        printf("B %d %d\n",ans1[i].price,ans1[i].qty);
    }
    return 0;
}