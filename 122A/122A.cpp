#include<stdio.h>
int main(){
    int n,i,j=4,a,k;
    scanf("%d",&n);
    for(i=1;i<1000;i++){
        for(;j<1000;j++){
          for(k=j;k!=0;k=k/10){
                a = k%10;
                if(a==4||a==7)
                    continue;
                else 
                    break;
                    }
         if(k==0)
             break;
         }          
        if(n%j==0){
                printf("YES");
                break;
                }
        j++;
        
    }
    if(i==1000)
        printf("NO");
    return 0;
    
}