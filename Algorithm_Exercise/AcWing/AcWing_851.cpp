#include <bits/stdc++.h>

#define int long long

using LL = long long;
using PII = std::pair<int, int>;

const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

int n, m;
int dis[N];
bool st[N];
std::queue<int> q;
std::vector<PII> g[N];

void spfa() {
  memset(dis, 0x3f, sizeof dis);
  dis[1] = 0;

  q.push(1);

  st[1] = true;

  while (!q.empty()) {
    int t = q.front();
    q.pop();

    st[t] = false;

    for (int i = 0; i < g[t].size(); ++i) {
      int temp = g[t][i].first;
      if (dis[temp] > dis[t] + g[t][i].second) {
        dis[temp] = dis[t] + g[t][i].second;

        if (!st[temp]) {
          q.push(temp);

          st[temp] = true;
        }
      }
    }
  }

  if (dis[n] > 1e15) {
    std::cout << "impossible" << std::endl;
  } else {
    std::cout << dis[n] << std::endl;
  }
}

void solution() {
  std::cin >> n >> m;

  while (m--) {
    int x, y, w;
    std::cin >> x >> y >> w;

    g[x].push_back({y, w});
  }

  spfa();
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return 0;
}