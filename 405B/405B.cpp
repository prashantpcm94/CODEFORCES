#include<stdio.h>
int main(){
   int cr=0,n,i,f=0,s=0,j=0;
   int lf=0,rf=0;
   scanf("%d",&n);
   char a[n];
   scanf("%c",&a[0]);
   for(i=0;i<n;i++){
       scanf("%c",&a[i]);
       if(f!=1){
           if(a[i]=='.')
               s++;
           else if(a[i]=='L'){
                   f=1;
                   s=0;
                   j=i;
                   lf=1;
                   
                }
               else{
                   f=1;
                   j=i;
                   rf=1;
               }
        }
   }
   if(f!=0)
       i=j;
   while(i<n){
        if(a[i]=='R'){
            i++;
            while(a[i]!='L'&&i<n){
                   cr++;
                   i++;
            }           
            rf=1;
            lf=0;
                
         }
        else if(a[i]=='L'){
            i++;
            if(rf==1&&cr%2!=0){
                   s++;               
               }
           
            while(a[i]!='R'&&i<n){
                   s++;
                   i++;
               }
           lf=1;
           rf=0;
           cr=0;
       }
   }     
   
   printf("%d",s);
   return 0;           
}