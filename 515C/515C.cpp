#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n,j=0,i,a;
    scanf("%d\n",&n);
    char s[n+5],ans[100000];
    scanf("%s",s);
    for(i=0;i<n;i++){
        if(s[i]=='0'||s[i]=='1'){
            continue;
        }
        a = s[i]-'0'; 
        if(a==9){
            ans[j++]=7+'0';
            ans[j++]=2+'0';    
            ans[j++]=3+'0';   
            ans[j++]=3+'0'; 
            continue;
        }         
        if(a%2!=0){
            ans[j++]=a+'0';
        }
        else{
            if(a==2){
                ans[j++]=a+'0';    
            }
            if(a==4){
                ans[j++]=3+'0';
                ans[j++]=2+'0'; 
                ans[j++]=2+'0';    
            }
            if(a==6){
                ans[j++]=5+'0';
                ans[j++]=3+'0';    
            }
            if(a==8){
                ans[j++]=7+'0';
                ans[j++]=2+'0';    
                ans[j++]=2+'0';   
                ans[j++]=2+'0';  
            }
        }
    }
    ans[j]='\0';
    sort(ans,ans+j,greater<char>());
    printf("%s",ans);
    return 0;
}