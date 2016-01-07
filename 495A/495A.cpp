#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a,b;
   a=n%10;
   b=n/10;
   int arr[10]={2,7,2,3,3,4,2,5,1,2};
   cout<<arr[a]*arr[b];
   
}