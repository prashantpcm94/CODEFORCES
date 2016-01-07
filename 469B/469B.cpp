#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int p,q,l,r,i,j,count=0,k,flag=0;
    scanf("%d%d%d%d",&p,&q,&l,&r);
    std::pair<int,int> x[p];
    std::pair<int,int> y[q];
    for(i=0;i<p;i++)
        scanf("%d%d",&x[i].first,&x[i].second);
    for(i=0;i<q;i++)
        scanf("%d%d",&y[i].first,&y[i].second);
    for(i=l;i<=r;i++){
        flag=0;//printf(".");
        for(j=0;j<q;j++){
            k=0;
            while(y[j].second+i>=x[k].first&&k<p){
                if(y[j].first+i<=x[k].second||(y[j].second+i<=x[k].second)){
                    count++;
                   // printf("%d %d",count,i);
                    flag=1;
                    break;
                }
                k++;
            }
            if(flag)
                break;
        }
    }
    printf("%d",count);
    return 0;
}