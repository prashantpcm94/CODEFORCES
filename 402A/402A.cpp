#include<stdio.h>
int main(){
    int k,a,b,v;
    scanf("%d%d%d%d",&k,&a,&b,&v); 
    int boxes =1,i,flag=1;
    while(a>v){
          if(b>0){
                a -= v;
                b--;
                flag++;
                if(flag==k){
                    a-=v;
                    if(a>0)
                    boxes++;
                    flag=1;
                }
            }
             else{
                 a -= v;
                 boxes++;                
            }    
              
    }
    
    printf("%d",boxes);
    return 0;
}