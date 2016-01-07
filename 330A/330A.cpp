#include<stdio.h>
int main(){
   int r,c,countr=0,countc=0,flag=0,i,j,sum;
   scanf("%d%d",&r,&c);
   char a[r][c];
   for(i=0;i<r;i++){
       flag=0;scanf("%c",&a[i][j]);
       for(j=0;j<c;j++){
           scanf("%c",&a[i][j]);
           if(a[i][j]=='S'){
               flag=1;
           } 
       }
       if(flag==0)
          countr++; 
   }
   for(j=0;j<c;j++){
       for(i=0,flag=0;i<r;i++){
           if(a[i][j]=='S')
               flag=1;
       }
       if(flag==0)
          countc++; 
   }
   sum = countr*c;
   sum += countc*(r-countr);
   printf("%d",sum);
   return 0;
   
}