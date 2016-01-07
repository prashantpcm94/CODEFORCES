#include<stdio.h>
int main(){
    int i,n,count=0,j,k=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0,j=0;i<n;i++){
        scanf("%d",&a[i]);
           if(a[i]==i){
            count++;
            }
            else{
                b[j]=i;j++;}
         }
         if(j!=0){
    for(i=0;i<j;i++){
        if(a[a[b[i]]]==b[i]) { 
            k=count+2;printf("%d",k);
            break;
            }
            }
         if(k!=count+2){
             k=count+1;printf("%d",k);   
            }
            }
            else
                printf("%d",count);
            
            return 0;
            }