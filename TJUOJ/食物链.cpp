//采用并查集解决食物链问题
//尚未完全理解，参考chatGPT的讲解
//万能头 #include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int MAXN = 50005;
int parent[MAXN], dist[MAXN]; // dist[x] %3: 0同类,1吃,2被吃

int find(int x) {
    if (parent[x] != x) {
        int temp = parent[x];
        parent[x] = find(parent[x]);
        dist[x] = (dist[x] + dist[temp]) % 3;
    }
    return parent[x];
}

bool unite(int x, int y, int relation) {
    int rootX = find(x), rootY = find(y);
    if (rootX == rootY) {
        return ( (dist[x] - dist[y] + 3) % 3 == relation );
    }
    parent[rootX] = rootY;
    dist[rootX] = (dist[y] - dist[x] + relation + 3) % 3;

    /*
    x → rootX → rootY  = x → rootY = ?  
    x → rootY = x → y + y → rootY = relation + dist[y]
    */
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) parent[i] = i, dist[i] = 0;
    
    int ans = 0;
    for(int i = 0; i < k; i++) {
        int D, X, Y;
        cin >> D >> X >> Y;
        if (X > n || Y > n || (D == 2 && X == Y)) {
            ans++;
            continue;
        }
        int relation = (D == 1 ? 0 : 1);
        if (!unite(X, Y, relation)) ans++;
    }
    cout << ans << endl;
}
