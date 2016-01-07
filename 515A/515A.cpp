#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int a,b,s,r;
    scanf("%d%d%d",&a,&b,&s);   
    r = s-abs(a)-abs(b);
    if(r>=0&&r%2==0){
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}