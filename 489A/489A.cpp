#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,min=1000000007,count=0;
    scanf("%d\n",&n);
    int a[n],i,j,k;
    int x[n],y[n],temp;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        min=1000000007;
        for(j=i;j<n;j++){
            if(min>a[j]){
                min=a[j];
                k=j;
            }
        }
        if(k!=i){
            temp = a[i];
            a[i]=a[k];
            a[k]=temp;
            x[count]=i;
            y[count]=k;
            count++;
        }
    }
    printf("%d\n",count);
    for(i=0;i<count;i++){
        printf("%d %d\n",x[i],y[i]);
    }
    return 0;
}