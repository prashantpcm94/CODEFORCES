#include <iostream>

using namespace std;

typedef long long ll;

struct pt {
  ll x, y;
  pt ort() {
    return {-y, x};
  }
  pt operator - (const pt &a) const {
    return {x-a.x, y-a.y};
  }
  ll operator * (const pt &a) const {
    return x * a.x + y * a.y;
  }
  ll norm2() const {
    return x * x + y * y;
  }
  bool operator == (const pt &a) const {
    return x == a.x and y == a.y;
  }
  bool null () const {
    return x == 0 and y == 0;
  }
};

pt C, Ct;
ll den;
bool test(const pt &A) {
  if (den == 0)
    return A.null();
  ll num = A * C;
  if (num % den != 0)
    return false;
  num = A * Ct;
  return num % den == 0;
}

int main() {
  pt A, B;
  cin >> A.x >> A.y;
  cin >> B.x >> B.y;
  cin >> C.x >> C.y;
  Ct = C.ort();
  den = C.norm2();
  bool valid = false;
  for (int i = 0; not valid and i < 4; ++i) {
    valid |= test(B-A);
    A = A.ort();
  }
  cout << (valid ? "YES" : "NO") << endl;
}