#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);      
    int i,h=0,f=0,t=0,x,flag=0;
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(!flag){
            if(x==25)
                t++;
            else if(x==50)
                f++;
            else
                h++;
            if(x==50){
                if(t==0)
                    flag=1;
                else
                    t--;
            }
            else if(x==100){
                if(f>0&&t>0){
                    f--;
                    t--;
                }
                else if(t>2)
                    t -=3;
                else
                    flag++;
            }
                   
        }     
    }    
    if(!flag)
        printf("YES");
    else
        printf("NO");    
    return 0;
}