#include<stdio.h>
int main(){
    int n,i,j,k=1,c=1;
    scanf("%d",&n);
    int h[n],m[n];
    scanf("%d%d",&h[0],&m[0]);
    for(i=1;i<n;i++){
        scanf("%d%d",&h[i],&m[i]);
        if(h[i]==h[i-1]&&m[i]==m[i-1])
            k++;
        else
            k=1;
        if(k>c)
             c=k;
             
    }
    printf("%d",c);
    return 0;
   }