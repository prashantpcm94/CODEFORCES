#include<stdio.h>
int main(){
    int m,n,i,j,k,flag,c=0,r=0;
    scanf("%d%d",&m,&n);
    int b[m][n],a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            a[i][j]=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
             scanf("%d",&b[i][j]);
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           flag=0;
           if(b[i][j]==1){
               for(k=0;k<m;k++)
                   if(b[k][j]!=1){
                       break;
                   }
               if(k==m){
                   flag++;
                   c++;
               }
               for(k=0;k<n;k++)
                   if(b[i][k]!=1){
                       break;
                   }
               if(k==n){
                   flag++;
                   r++;
               }
               if(flag==2){
                   a[i][j]=1;
               }                   
               if(flag==0){
                   printf("NO");
                   return 0; 
               }
           }            
        }
    }
    if(r>0&&c>0||(r==0&&c==0)){
        printf("YES\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++)
                printf("%d ",a[i][j]);
            printf("\n");
        }
    }
    else
        printf("NO");
    return 0;
}