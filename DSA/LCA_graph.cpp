#include <bits/stdc++.h>
using namespace std;
#define pb push_back

const int maxN = 300005;
const int logN = 20;
int parent[maxN][logN]; // parent[i][j] is 2^j th parent of node i // for binary lifting ( parent which is at distance 2^j from that node)
int depth[maxN];
vector<int> adj[maxN];
int lca(int u, int v)
{
    if (depth[u] < depth[v])
        swap(u, v);

    // binary lifting ki prakriya :)
    for (int i = logN - 1; i >= 0; i--)
    {
        if (depth[parent[u][i]] >= depth[v])
            u = parent[u][i];
    }

    if (u == v)
        return u;

    for (int i = logN - 1; i >= 0; i--)
    {
        if (parent[u][i] != parent[v][i])
        {
            u = parent[u][i];
            v = parent[v][i];
        }
    }

    return parent[u][0];
}

// shortest distance between 2 nodes in tree
int dist(int u, int v)
{
    int x = lca(u, v);
    return (depth[u] + depth[v] - 2 * depth[x]);
}
void dfs(int node)

{
    // making the whole parent array for this node using dynamic programming

    for (int j = 1; j < logN; j++)
    {
        // 2^j = 2*2^(j-1) same as 2^j =  2^(j-1)+2^(j-1) distance wala node
        // that means first find 2^(j-1)th parent of current node {intermediate (lets say) ,
        // find 2^(j-1)th parent of intermediate node

        int intermediate = parent[node][j - 1];
        parent[node][j] = parent[intermediate][j - 1];
    }
    for (auto child : adj[node])
    {
        if (!depth[child])
        {
            depth[child] = depth[node] + 1;
            parent[child][0] = node; // first parent OR( 2^0 th parent we can say )
            dfs(child);
        }
    }
}
int main()
{
    int n, u, v, q, r;
    //cout << "enter the number of nodes in tree \n";
    cin >> n;
    //cout << "enter the edges \n";
    for (int i = 1; i < n; i++) // looping for n-1 eges
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    depth[1] = 1;
    dfs(1);

    //cout<<"enter the number of query \n";
    pair<int, int> p[3];
    cin >> q;
    while (q--)
    {
        cin >> r >> u >> v;
        p[0].second = lca(r, u);
        p[1].second = lca(r, v);
        p[2].second = lca(u, v);

        for (int i = 0; i < 3; i++)
        {
            int x = p[i].second;
            p[i].first = dist(x, v) + dist(x, u) + dist(x, r);
        }

        sort(p, p + 3);
        cout << p[0].second << endl;
        //cout<<"LCA of "<<u<<" and "<<v<<"is "<<lca(u,v)<<endl;
    }
}