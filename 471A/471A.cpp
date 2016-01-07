#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n[6],i,c=1,a,b;
    for(i=0;i<6;i++)
        scanf("%d",&n[i]);  
    sort(n,n+6);
    for(i=0;i<6&&c<4;i++){
        if(n[i]==n[i+1])
            c++;
        else
            c=1; 
        if(c>2)
            a=i+1;
        
           
    }
    
    if(c<4)
        printf("Alien");
    else{
        a = (a + 1)    %6;
        b = (a+1) %6;

        if(n[a]!=n[b])
            printf("Bear");
        else
            printf("Elephant");    
    }
    return 0;
}