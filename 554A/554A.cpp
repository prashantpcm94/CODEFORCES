#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int ans;
    ans = s.length();
    ans = (ans+1)*26;
    ans = ans -  s.length();
    cout<<ans;
    return 0;
}