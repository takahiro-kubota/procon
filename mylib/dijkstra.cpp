priority_queue<P, vP, greater<P>> pque;
vll dist(n, INF);
dist[0] = 0;
pque.push({0, 0});
while (!pque.empty()) {
  P p = pque.top();
  pque.pop();
  ll du, u;
  tie(du, u) = p;
  if (dist[u] < du) continue;
  for (auto e : to[u]) {
    ll v, c;
    tie(v, c) = e;
    if (dist[v] > du + c) {
      dist[v] = du + c;
      pque.push({du + c, v});
    }
  }
}
