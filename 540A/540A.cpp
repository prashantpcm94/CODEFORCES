#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,ans=0,temp;
    scanf("%d",&n);
    char s1[n+5],s2[n+5];
    scanf("%s %s",s1,s2);
    for(i=0;i<n;i++){
        temp = abs(s1[i]-s2[i]);
        if(temp>5)
            temp = 10-temp;
        ans += temp;        
    }
    printf("%d",ans);
    return 0;
}