#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,x1,x2,y1,y2,ans;
    scanf("%d",&n);
    ans=0;
    while(n--){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        ans += ((y2-y1)+1)*(x2-x1+1);
    }
    printf("%d",ans);
    return 0;
}