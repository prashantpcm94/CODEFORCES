#include<stdio.h>
#include<string.h>
int main(){
    int a[1000],i,j,s=0;
    char c;    
    memset(a,0,sizeof(a));
    a['Q']=9;a['q']=-9;
    a['R']=5;a['r']=-5;
    a['B']=3;a['b']=-3;
    a['N']=3;a['n']=-3;
    a['P']=1;a['p']=-1;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            scanf("%c",&c);
            s += a[c];
        }
        scanf("\n");
    }
    if(s>0){
        printf("White");
    }
    else if(s<0){
        printf("Black");
    }
    else{
        printf("Draw");
    }
    return 0;
}