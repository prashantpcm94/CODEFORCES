#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(){ 
    int n,m,k,i,l,c,j,x,y,flag=0;
    scanf("%d%d%d",&n,&m,&k);
    int a[n+2][m+2];
    memset(a,0,sizeof(a));
    for(c=0;c<k;c++){
        scanf("%d%d",&x,&y);
        if(!flag){
            a[x][y]=1;

                if(a[x-1][y-1]==1&&a[x-1][y]==1&&a[x][y-1]==1)
                    flag=c+1; 
                if(a[x+1][y+1]==1&&a[x+1][y]==1&&a[x][y+1]==1)
                    flag=c+1;
                if(a[x+1][y-1]==1&&a[x+1][y]==1&&a[x][y-1]==1)
                    flag=c+1;
                if(a[x-1][y+1]==1&&a[x-1][y]==1&&a[x][y+1]==1)
                    flag=c+1;

        }    
    }
    printf("%d",flag);    
    return 0;    
}