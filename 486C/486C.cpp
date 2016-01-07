#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int n,p,i,sum=0,k,l,r;
    scanf("%d%d",&n,&p);
    p--;
    char s[n+1];
    int h[n];
    memset(h,0,sizeof(int)*n);
    scanf("%s",s);
    for(i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            h[i] = abs(s[i]-s[n-i-1]);
            if(h[i]>13){
                h[i] = 26- h[i];
            }
            h[n-i-1]=h[i];
        }
    }
    
    if(p<n/2){
        r=l=p;
        for(k=0;k<p;k++){
            if(h[k]>0)
                break;
        }
        if(k<=p){
            l =k;
            for(;k<=p;k++){
                sum+=h[k];
            }
        } 
        for(k=n/2-1;k>p;k--)
            if(h[k]>0)
                break;
        if(k!=p){
            r=k;
            for(;k>p;k--){
                sum+=h[k];
            }
        }    
        if(p-l>r-p){
            sum += p-l+ 2*(r-p);
        }
        else
            sum += 2*(p-l)+ r-p;
        printf("%d",sum); 
    }
    else if(p>n/2||(p==n/2&&n%2==0)){
        l=r=p;
        for(k=n/2+n%2;k<p;k++){
            if(h[k]>0)
                break;
        }
        if(k<=p){
            l =k;
            for(;k<=p;k++){
                sum+=h[k];
            }
        }
        for(k=n-1;k>p;k--)
            if(h[k]>0)
                break;
        if(k!=p){
            r=k;
            for(;k>p;k--){
                sum+=h[k];
            }
        }
        if(p-l>r-p){
            sum += p-l+ 2*(r-p);
        }
        else
            sum += 2*(p-l)+ r-p;
        printf("%d",sum);     
    }
    else if(p==n/2&&n%2!=0){
        for(k=p+1;k<n;k++){
            if(h[k]>0)
                break;
        }
        if(k!=n){
            for(;k<n;k++){
                if(h[k]>0)           
                    l=k;
                sum += h[k];
            }
            sum += l-p;
        }
        printf("%d",sum);
    }
    
    return 0;
}