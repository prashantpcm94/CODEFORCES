#include<string.h>
#include<stdio.h>
int main(){
    int n,i,m[26][26],j,h=0,x=-1,y=-1,f=1,a[26];
    memset(m,-1,sizeof(m));
    memset(a,-1,sizeof(a));
    scanf("%d\n",&n);    
    char s[n+5],t[n+5];
    scanf("%s\n%s",s,t);
    for(i=0;i<n;i++){
        if(s[i]!=t[i]){
           h++;
           m[s[i]-'a'][t[i]-'a']=i;   
           a[s[i]-'a']=i;       
        }
    }
    for(i=0;i<26&&f;i++){
        for(j=0;j<26&&f;j++){
            if(i!=j&&m[i][j]>=0&&m[j][i]>=0){
                x=m[i][j]+1;
                y=m[j][i]+1;
                h -= 2;
                f=0;        
            }
        }
    }
    if(f==1){
        for(i=0;i<n;i++){
            if(s[i]!=t[i]){
               if(a[t[i]-'a']>=0){
                   x=i+1;
                   y=a[t[i]-'a']+1;
                   h--;
                   break;                   
               }
            }
        }
    }
    printf("%d\n%d %d",h,x,y);
    return 0;
}