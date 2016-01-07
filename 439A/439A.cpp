#include<stdio.h>
int main(){
    int n,d,max=0;
    scanf("%d%d",&n,&d);
    int a[n],i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
        sum +=10;
        max +=2;
    } 
    sum -=10;
    if(d-sum>=0){
        max += (d-sum)/5 -2;
    }
    else
        max=-1;
    printf("%d",max);
    return 0;
}