#include<stdio.h>
#include<string.h>
int main(){
    char s[101],p;
    scanf("%c\n%s",&p,s);
    int i,l,j;
    l = strlen(s);
    char f1[] = "qwertyuiop";
    char f2[] = "asdfghjkl;";
    char f3[] = "zxcvbnm,./";
    for(i=0;i<l;i++){
        for(j=0;j<11;j++){
            if(s[i]==f1[j]){
                if(p=='R')
                    s[i]=f1[j-1];
                else
                    s[i]=f1[j+1];
                break;
            }
        }
        for(j=0;j<11;j++){
            if(s[i]==f2[j]){
                if(p=='R')
                    s[i]=f2[j-1];
                else
                    s[i]=f2[j+1];
                break;
            }
        }
        for(j=0;j<11;j++){
            if(s[i]==f3[j]){
                if(p=='R')
                    s[i]=f3[j-1];
                else
                    s[i]=f3[j+1];
                break;
            }
        }
            
    }
    printf("%s",s);
    return 0; 
}