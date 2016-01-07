#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4,d,flag=0,m1,m2;
    float m;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(x1==x2){
        d = y2 - y1;
        x3=x1+d;
        x4=x2+d;
        y3=y2;
        y4=y1; 
        flag =1;   
    }
    else if(y1==y2){
        d = x2- x1;
        y3=y1+d;
        y4=y2+d;
        x3=x2;
        x4=x1;
        flag = 1;
    }
    else{
        
        m1 = y2-y1;
        m2 = x2-x1;
        if(m1==m2||m1==m2*-1){
        x3 = x2;
        y3 = y1;
        x4 = x1;
        y4 = y2;
        flag =1;
        }
    } 
    if(flag==1)
        printf("%d %d %d %d",x4,y4,x3,y3);
    else
        printf("-1");
    return 0;   
}