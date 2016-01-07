#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m,s,i,sum=0;
    scanf("%d %d",&m,&s);
    int a[10],b[10];
    memset(a,0,sizeof(a));
    
    if(s==0&&m!=1||s>9*m){
        printf("-1 -1");
        return 0;
    }
    if(s==0&&m==1){
        printf("0 0");
        return 0;
    }
    i = 9;
    while(s){
        a[i] = s/i;
        s =  s%i;
        i--;
    }   
    for(i=0;i<10;i++){
        sum += a[i];
    }
    a[0]= m-sum;
    for(i=0;i<10;i++){
       // printf("%d %d\n",i,a[i]);
        b[i] = a[i];
    }
    if(a[1]==0&&a[0]>0){
        a[1]++;a[0]--;
        for(i=2;i<10;i++){
            if(a[i]!=0){
                a[i]--;
                a[i-1]++;
                break;
            }
        }
    }
    
    for(i=1;i<10;i++){
        if(a[i]!=0){
            printf("%d",i);
            a[i]--;
            break;
        }
    }
    while(1){
        for(i=0;i<10;i++)
            if(a[i]>0)
                break;
        if(i==10)
            break;
        else
            printf("%d",i);
        a[i]--;
    }
    printf(" ");
    while(1){
        for(i=9;i>=0;i--)
            if(b[i]>0)
                break;
        if(i<0)
            break;
        else
            printf("%d",i);
        b[i]--;
    }
    return 0;
}