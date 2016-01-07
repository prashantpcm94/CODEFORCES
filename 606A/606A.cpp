#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,b,c;
    cin>>A>>b>>c;
    int x,y,z;
    cin>>x>>y>>z;
    int a[3];
    a[0]=A-x;
    a[1]=b-y;
    a[2]=c-z;
    sort(a,a+3);
    if(a[2]>=0){
        if(a[1]<0){
            a[2] += a[1]*2;
            if(a[2]<0){
                printf("No");
                return 0;
            }            
            a[1]=0;                                    
        }
        if(a[0]<0){
            if(a[1]>=-2*a[0]){
                printf("Yes");
                return 0;
            }   
            else{
                a[0] += a[1]/2; 
            }             
            if(a[2]>=-2*a[0]){
                printf("Yes");
                return 0;
            }
            printf("No");
            return 0;   
        }
        printf("Yes");
        return 0;
    }
    else
        printf("No");
    return 0;
}