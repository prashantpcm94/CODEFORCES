#include <stdio.h>
#include <string.h>
#include <iostream>
#include<algorithm>
using namespace std;
int main(){ 
    int m,n,i,j,f=1;
    scanf("%d%d",&m,&n);       
    char a[m][n];
    memset(a,'#',sizeof(a));
    for(i=1;i<m;i+=2){
        if(f%2!=0){
            for(j=0;j<n-1;j++)
                a[i][j]='.';
        }
        else{
            for(j=1;j<n;j++)
                a[i][j]='.';
        }
        f++;
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;    
}