#include<bits/stdc++.h>
using namespace std;
int main(){
    int m1,m2,m3,m4,m5;
    cin>>m1>>m2>>m3>>m4>>m5;
    int w1,w2,w3,w4,w5;
    cin>>w1>>w2>>w3>>w4>>w5;
    int hs,hu;
    cin>>hs>>hu;
    int score=0;
    score += max(150,(250-m1)*2-50*w1);
    score += max(300,(250-m2)*4-50*w2);
    score += max(450,(250-m3)*6-50*w3);
    score += max(600,(250-m4)*8-50*w4);
    score += max(750,(250-m5)*10-50*w5);
    score += 100*hs;
    score -= 50*hu;
    cout<<score;
    return 0;
}