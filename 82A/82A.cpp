#include<stdio.h>
#include<math.h>
int main(){
    int n,j,k,i,S=0,a,b;
    scanf("%d",&n);
    for(i=0;S<=n;i++)
        S += 5*pow(2,i);
        i--;
       
   
    j = S - 5*pow(2,i);
   
    
   
    k = n-j;
    if((n-j)==0)
        b=5;
        else{
    
    a = pow(2,i);
   
    if(k%a!=0)
        b=(k/a) +1;
        else
         b= k/a;
         }
    
    switch(b){
        case 1 : printf("Sheldon"); break;
        case 2 : printf("Leonard"); break;
        case 3 : printf("Penny"); break;
        case 4 : printf("Rajesh"); break;
        case 5 : printf("Howard"); break;
        default: printf("error");
     }
     return 0;
     }