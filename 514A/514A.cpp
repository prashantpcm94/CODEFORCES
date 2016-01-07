#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int a[100],l,i;
    scanf("%s",s);
    l = strlen(s);
    for(i=0;i<l;i++){
        a[i] = s[i]-'0';
        if(i==0&&a[i]==9)
            continue;
        if(a[i]>=5)
            a[i] = 9-a[i];
        s[i] = a[i]+'0';
    }
    printf("%s",s);
    return 0;
}