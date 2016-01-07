#include <stdio.h>
#include <string.h>
int main(){ 
    int n,c,i=0,s=0,ans=0,l,r=0;
    char str[100005],temp;
    scanf("%s",&str);       
    i=strlen(str);
        for(l=0;l<i-1;l++){
            if((str[l]-'0')%2==0){
                r=l;s++;
                if(str[i-1]>str[l]){                    
                    break;
                }                             
            }          
        }
        temp=str[i-1];
        str[i-1]=str[r];
        str[r]=temp;
        if(s){
        for(l=0;l<i;l++)
            printf("%c",str[l]);
   }
   else
       printf("-1");
        
    return 0;    
}