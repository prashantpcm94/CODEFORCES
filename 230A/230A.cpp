#include<stdio.h>
int sort(int x[],int y[],int z);
int main(){
    int s,n,i;
    scanf("%d%d",&s,&n); 
    int x[n],y[n];
    for(i=0;i<n;i++)
        scanf("%d%d",&x[i],&y[i]);
    sort(x,y,n);
    for(i=0;i<n;i++){
        if(s<=x[i])
            break ;
        else
            s +=y[i];
    }
    if(i<n)
        printf("NO");
    else
        printf("YES");
    
}
int sort(int x[],int y[],int size){
    int i,j,k,t;
    for(i=0;i<size;i++)
        for(j=0;j<size-1;j++)
            if(x[j]>x[j+1]){
                k=x[j];t=y[j];
                x[j]=x[j+1];y[j]=y[j+1];
                x[j+1]=k;y[j+1]=t;
            }
    return 0;
}