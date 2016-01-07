#include <iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n,i,j=1;
    scanf("%d",&n);
    int a[n],hash[100055],visit[100055];
    memset(hash,0,sizeof(hash));
    memset(visit,0,sizeof(visit));        
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);  
        hash[a[i]]++;              
    }    
    while(hash[j]>0){
        j++;
    }          
    for(i=0;i<n;i++){
        if(visit[a[i]]==0&&a[i]<=n){
            visit[a[i]]=1;
        }
        else{
            a[i] = j;
            visit[a[i]]=1;
            j++;            
            while(hash[j]>0){
                j++;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;    
}