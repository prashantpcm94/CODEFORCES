#include<stdio.h>
#include<math.h>
int main(){
    int a,c=0,d=0,i;
    for(i=0;i<3;i++){
        scanf("%d",&a);
        c += a;
    }
    for(i=0;i<3;i++){
        scanf("%d",&a);
        d += a;
    }
    scanf("%d",&a);
    int x,y;
    x = ceil((float)c/5);
    y = ceil((float)d/10);
    if(x+y>a)
        printf("NO");
    else
        printf("YES");
    return 0;
}