#include<stdio.h>
#include<limits.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i,min=0,x,count=0;
    char c;
    scanf("%d\n",&n);
    int hash[1000006]={0};
    for(i=0;i<n;i++){
        scanf("%c %d\n",&c,&x);
        if(c=='+'){
            hash[x]=1;
            count++;            
        }   
        else{
            if(hash[x]==0){
                min++;                
            }
            else{
                hash[x]=0;
                count--;
            }
        }
        if(min<count)
            min = count;   
    }
    printf("%d",min);
    return 0;
}