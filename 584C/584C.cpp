#include<bits/stdc++.h>
using namespace std;
char getdif(char a,char b){
    if(a!='a'&&b!='a'){
        return 'a';
    }
    if(a!='b'&&b!='b'){
        return 'b';
    }
    else
        return 'c';
}
int main(){
    int n,t,c1=0,c2=0,l,f=0,i;    
    cin>>n>>t;
    char s1[n+5],s2[n+5],s3[n+5];
    cin>>s1;
    cin>>s2;
    for(i=0;i<n;i++){    
        if(s1[i]==s2[i]){
            c1++;
        }
    }
    c2 = n-c1;
    if(t<(c2+1)/2){
        printf("-1");
        return 0;
    }
    for(i=0;i<=n;i++){    
        s3[i]=s1[i];
    }
    if(t>c2){       
        for(i=0;i<n;i++){    
            if(s1[i]!=s2[i]){
                s3[i] = getdif(s1[i],s2[i]); 
                t--;   
            }
        }
        for(i=0;i<n;i++){    
            if(s1[i]==s2[i]&&t){
                s3[i] = getdif(s1[i],s2[i]); 
                t--;   
            }
        }        
    }
    else{                
        t = c2-t;
        t = 2*t;
        for(i=0;i<n;i++){    
            if(s1[i]!=s2[i]){
                if(t){
                    if(f==0){
                        s3[i]=s1[i];
                        f=1;
                    }
                    else{
                        s3[i]=s2[i];
                        f=0;
                    }
                    t--;
                }   
                else
                    s3[i] = getdif(s1[i],s2[i]);                 
            }               
        }          
    }
    cout<<s3;
    return 0;
}