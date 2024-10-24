#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void solve() {
  int n, k;
  cin >> n >> k;

  vi a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  while (k--) {
    int x;
    cin >> x;
    
    int l = -1;
    int r = n;

    while (r > l + 1) {
      int m = (l + r) / 2;
      if (a[m] < x) l = m;
      else r = m;
    }

    cout << r + 1 << "\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
