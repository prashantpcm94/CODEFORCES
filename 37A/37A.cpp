#include<stdio.h>
int sort(int[],int size);
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,h=1,count=1,hm=1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    for(i=0;i<n-1;i++){ 
            if(a[i]==a[i+1]){
                h++;    
            }
            else{
                count++;
                if(hm<h)
                    hm=h;
                h=1;
           }
    }
    if(hm<h)
        hm=h;
    printf("%d %d",hm,count);
    return 0;
}
int sort(int a[],int size){
    int i,j,k;
    for(i=0;i<size;i++)
        for(j=0;j<size-1;j++)
            if(a[j]>a[j+1]){
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;        
            }
    return 0;
}