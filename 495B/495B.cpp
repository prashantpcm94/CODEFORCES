#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   long long int a;
   long long int b;
   cin>>a>>b;
   if(a<b){
   cout<<0;
   }
   else if(a==b){
       cout<<"infinity";
   } else {
   int x=a-b;
       int ans=0;
       int z= sqrt(x);
       for(int i=1;i<=z;i++){
           if(x%i==0){
               if(i>b) ans++;
               if(x/i>b&&(x/i)!=i){
               ans++;
               }
           }
       }
       cout<<ans<<endl;
   }
}