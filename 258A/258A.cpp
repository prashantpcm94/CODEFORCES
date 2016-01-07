#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c[100001];
    cin>>c;
    int i,n=strlen(c);
    for(i=0;i<n;i++)
    {
        if(c[i]=='0')
        {
            for(int j=i;j<n;j++)
            c[j]=c[j+1];
            break;
        }
    }
    if(i!=n)
    cout<<c;
    else
    {
        for(int i=0;i<n-1;i++)
        cout<<c[i];
    }
    
}