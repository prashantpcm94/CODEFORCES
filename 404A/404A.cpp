#include<stdio.h>
int main(){
    int n,i,j;
    char x,y;
    scanf("%d%c",&n,&x);
    char a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
                scanf("%c",&a[i][j]);
        scanf("%c",&x);
    }
    x= a[0][0];
    y= a[0][1];
    i=1;
    if(x!=y){
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(i==j){
                            

                if(a[i][j]!=x)
                    goto S;
                    }
            else if((n-1-i)==j){
                    if(a[i][j]!=x)
                        goto S;
            }
            else{
                if(a[i][j]!=y)
                    goto S;
            }
       }
       }

    S:if(i==n&&j==n)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}