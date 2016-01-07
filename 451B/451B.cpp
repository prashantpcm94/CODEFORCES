#include<stdio.h>
int main(){
    int n,rev=0,l,r;
    scanf("%d",&n);
    r=n;
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }  
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]&&rev==0){
                rev++;
                l=i+1;
        }
        if(a[i]<a[i+1]&&rev==1){
                rev++;
                r=i+1;
        }  
        if(a[i]>a[i+1]&&rev==2){
                rev=3;
                break;
        }
                    
    }  
    if(rev==0)
        printf("yes\n%d %d",r,r);
    else if(rev==1){
        if(l==1)
            printf("yes\n%d %d",l,r);
        else if(a[l-2]<=a[r-1])
            printf("yes\n%d %d",l,r);
        else
            printf("no");
    }
    else if(rev==2){
        if(l==1&&a[0]<a[r])
            printf("yes\n%d %d",l,r);
        else if(l>1&&a[l-2]<a[r-1]&&a[r]>a[l-1])
            printf("yes\n%d %d",l,r);
        else
            printf("no");
    }
    else
            printf("no");         
    
   
    return 0;
}