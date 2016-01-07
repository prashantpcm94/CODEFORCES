#include <stdio.h>
#include <string.h>
#include <iostream>
#include<algorithm>
using namespace std;
int main(){ 
    int m,t,r,i,j,k,q;long long ans=0;
    scanf("%d%d%d",&m,&t,&r);       
    int a[m],c[r];
    memset(c,0,sizeof(c));
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    if(r>t){
        printf("-1");
    }
    else{
        for(i=0;i<m;i++){
            k=0;
            sort(c,c+r);            
            for(j=0;j<r;j++){
                if(c[j]<=a[i]){
                    c[j] = a[i]+t-k;k++;   
                    ans++;    
                    /*for(q=0;q<r;q++){
                        printf("%d ",c[q]);
                    }
                            printf(" a[i]= %d %d\n",a[i],ans);*/
                    }          
                }     
                                          
        }
        
         printf("%lld",ans);
    }
   
    return 0;    
}