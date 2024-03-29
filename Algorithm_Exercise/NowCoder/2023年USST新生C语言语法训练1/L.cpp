#include <bits/stdc++.h>

#define int long long

using LL = long long;

const int MOD = 1e9 + 7;

int n;

void solution() {
  std::cin >> n;

  if (n == 1) {
    std::cout << 1 << "\n";
  } else {
    if ((n - 1) % 2) {
      std::cout << -1 << "\n";
    } else {
      std::cout << n << "\n";
    }
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}