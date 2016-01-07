#include <stdio.h>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    scanf("%d",&n); 
    char f[n][51],l[n][51];
    char s[51];
    int a[n];
    for(i=0;i<n;i++){
        scanf("%s %s",f[i],l[i]);        
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); 
        a[i]--;       
    }
    if(strcmp(f[a[0]],l[a[0]])>0)
        strcpy(s,l[a[0]]);
    else
        strcpy(s,f[a[0]]);
   
    for(i=1;i<n;i++){
        if(strcmp(s,f[a[i]])>0&&strcmp(s,l[a[i]])>0)    
            break;
        else{
            if(strcmp(s,f[a[i]])<0&&strcmp(s,l[a[i]])<0){
                if(strcmp(f[a[i]],l[a[i]])>0)
                    strcpy(s,l[a[i]]);
                else
                    strcpy(s,f[a[i]]);    
            }
            else if(strcmp(s,f[a[i]])<0){
                strcpy(s,f[a[i]]);
            }
            else
                strcpy(s,l[a[i]]);
        }
        
    }
    if(i==n)
        printf("YES");
    else
        printf("NO");
    return 0;
}