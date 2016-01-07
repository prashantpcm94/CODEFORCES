#include <iostream>
#include <cstring>
#define MAXN 18003005

using namespace std;

bool isp[MAXN];
int ans[6001];

void criba(int n) {
  memset(isp, 1, sizeof isp);
  isp[0] = isp[1] = 0;
  for (int i = 0; i * i <= n; ++i)
    if (isp[i])
      for (int j = i * i; j <= n; j += i)
        isp[j] = false;
}

int main() {
  int n, total;
  cin >> n;
  if (n == 2) {
    cout << "1 1\n";
  } else {
    total = n * (n+1) / 2;
    criba(total);
    int i;
    for (i = 2; i <= (total>>1); ++i)
      if (isp[i] and isp[total-i])
        break;
    int lim = n;
    if (not isp[i] or not isp[total-i]) {
      int ret = n;
      while (not isp[ret])
        ret--;
      lim = ret-1;
      ans[ret] = 2;
      total -= ret;
      for (i = 2; i <= (total>>1); ++i)
        if (isp[i] and isp[total-i])
          break;
    }
    //cout << "# " << i << " " << total - i << endl;
    while (i) {
      lim= min(lim, i);
      ans[lim] = 1;
      i -= lim;
    }
    cout << ans[1]+1;
    for (int i = 2; i <= n; ++i)
      cout << " " << ans[i] + 1;
    cout << endl;
  }
}