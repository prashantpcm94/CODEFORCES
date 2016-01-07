#include<stdio.h>
int main(){
    int n,i,j,k=0,s;
    scanf("%d",&n);
    s=n-1;
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        if(k==0){
            if(a[i]<=a[i+1])
                s--;
            else
                k++;
        }
        else if(k==1){
            if(a[i]>a[i+1])
                break;
        }
    }
    if(i==n-1){
        if(a[n-1]<=a[0]||k==0)
        printf("%d",s);
        else
             printf("-1");
    }
    else
        printf("-1");          
    return 0;
}