#include <stdio.h>
#include <string.h>
int ispal(const char *s){
    const char *p = s + strlen(s) - 1;
    while (s < p)
        if (*p-- != *s++)
            return 0; 
    return 1;
}
int main(){ 
    char s[100],ans[100],ans2[100];
    int i,k=0,r;
    scanf("%s",s);
   
    if(ispal(s)){
        for(i=0;i<strlen(s)/2;i++){
            ans[i]=s[i];
        }
        ans[i]=s[i];i++;
        for(;i<strlen(s)+1;i++){
            ans[i]=s[i-1];
        }
        ans[i]='\0';
    }
    else{        
        k=strlen(s);
        for(i=0;i<k;i++){
            if(s[i]!=s[k-i-1]){               
                if(s[i+1]==s[k-i-1]){
                    for(r=0;r<k-i;r++){
                        ans2[r]=s[r];
                    }
                    ans2[r++]=s[i];                    
                    ans2[k+1]='\0';                     
                    for(;r<=k;r++){
                        ans2[r]=s[r-1];
                    }                                        
                    break;
                }
                else if(s[i]==s[k-i-2]){    
                            
                    for(r=0;r<i;r++){
                        ans2[r]=s[r];
                    }
                    ans2[r]=s[k-i-1];r++;
                    for(;i<=k;i++,r++){
                        ans2[r]=s[i];
                    }
                   
                    break;
                }
                else{
                    ans2[0] = 'N';
                    ans2[1] = 'A';
                    ans2[2] = '\0';
                    break;
                }
            }
        }    
        for(i=0;i<k;i++){
            if(s[i]!=s[k-i-1]){               
                if(s[i]==s[k-i-2]){    
                            
                    for(r=0;r<i;r++){
                        ans[r]=s[r];
                    }
                    ans[r]=s[k-i-1];r++;
                    for(;i<=k;i++,r++){
                        ans[r]=s[i];
                    }
                    break;
                }
                else if(s[i+1]==s[k-i-1]){
                    for(r=0;r<k-i;r++){
                        ans[r]=s[r];
                    }
                    ans[r++]=s[i];                    
                    ans[k+1]='\0';                     
                    for(;r<=k;r++){
                        ans[r]=s[r-1];
                    }                                        
                    break;
                }
                else{
                    ans[0] = 'N';
                    ans[1] = 'A';
                    ans[2] = '\0';
                    break;
                }
            }
        }
        if(ispal(ans2)){
            for(i=0;i<=strlen(ans2);i++){
                ans[i]=ans2[i];
            }
        }
    }
    if(ispal(ans)==0){
        ans[0] = 'N';
        ans[1] = 'A';
        ans[2] = '\0';                
    }
    
    printf("%s",ans);
    return 0;    
}