#include<stdio.h>
#include<math.h>
int main(){
    int n,m,i,j=0,max=0;
    scanf("%d%d",&n,&m);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i] = ceil((float)a[i]/m);
        if(b[i]>=max){
            max = b[i];
            j= i;
        }
    }
    printf("%d",j+1);   
    return 0;
}