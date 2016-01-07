#include<stdio.h>
int main(){
    int n,i,d1,d2,s1,s2,t1=0,t2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d%d",&s1,&s2);
    if(s2<s1)
        s2= s1+s2-(s1=s2);
    s1--;s2-=2;
    for(i=0;i<n;i++){
        if(i<s1||i>s2)
            t1+=a[i];
        else
            t2+=a[i];
    }
    if(t1<t2)
        printf("%d",t1);
    else
        printf("%d",t2);
    return 0;
}