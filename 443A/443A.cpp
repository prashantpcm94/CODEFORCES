#include<stdio.h>
#include<string.h>
int main(){
    char c,a[1000];
    int i=0,a1='a',z1='z',b[26];
    for(i=0;i<26;i++)
        b[i]=0;
    i=0;
    c = getchar();
    while(c!='}'){
        c = getchar(); 
        if(c<=z1&&c>=a1){
            a[i]=c;    
            i++;            
        }
    }
    a[i]='\0';
    for(i=0;i<strlen(a);i++){
            a1=0;
            a1 = a[i] - '0'-49;
            b[a1]++;
    }
    z1=0;
    for(i=0;i<26;i++)
        if(b[i]>0)
            z1++;   
    printf("%d",z1); 
    return 0;
}