#include<stdio.h>
#include<math.h>
int main(){
    char c,e='\0',f='\0';
    int a=0,b=0,n=0;
    c = getchar();
    a = c;
    while(a<58&&a>=48){
        f = e;
        e = c;
        c = getchar(); 
        a = c;
    }
    a=0;
    if(f!='\0')
    a = f - '0';
    b = e - '0';
    n = 10*a + b;
    n = n%4;
    a = pow(1,n)+pow(2,n)+pow(3,n)+pow(4,n);
    printf("%d",a%5);
    return 0;
}