#include<stdio.h>
int main(){
    int t,s,q,d,time,r;
    scanf("%d%d%d",&t,&s,&q);
    d=s;
    time=0;
    r=0;
    int count=1;
    while(1){
        if(r>=t){
            break;
        }
        else if(r>=d){
            r=0;
            count++;
        }
        else{
            time+=q;
            d+=q-1;
            r+=q;            
        }        
    }
    printf("%d\n",count);
    
    return 0;
    
    
}