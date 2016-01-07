#include<stdio.h>
int main(){
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    max = a*b*c;
    if((a+b)*c>max)
        max = (a+b)*c;
    if(a*(b+c)>max)
         max = a*(b+c);
    if(a+b+c>max)
        max = a+b+c;
    if(max<a+b*c)
        max = a+b*c;
    if(max<a*b+c)
        max = a*b+c;
    printf("%d",max);
    return 0;
}