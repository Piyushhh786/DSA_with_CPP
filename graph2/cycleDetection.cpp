#include <bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
vector<int> parent;
vector<int> size;
int get(int x)
{
    if (x == parent[x])
        return x;
    return parent[x] = get(parent[x]);
}
void DSU(int a, int b)
{
    a = get(a);
    b = get(b);
    if (size[a] < size[b])
    {
        size[b]++;
        parent[a] = parent[b];
    }
    else
    {
        size[a]++;
        parent[b] = parent[a];
    }
}
bool cycle_detection()
{
    queue<int> q;
    unordered_set<int> s; // for marking....
    q.push(0);
    s.insert(0);
    while (q.size() > 0)

    {
        int temp = q.front();
        s.insert(temp);
        q.pop();
        for (auto x : graph[temp])
        {
            if (s.find(x) == s.end())
            {
                q.push(x);

                if (get(x) == get(temp))
                    return true;
                DSU(x, temp);
            }
        }
    }
    return false;
}
int main()
{
    int v, e;
    cin >> v >> e;
    graph.resize(v);
    parent.resize(v);
    size.resize(v);
    for (int i = 0; i < v; i++)
    {
        parent[i] = i;
    }
    while (e--)
    {
        int a, b;
        cin >> a >> b; // mandatory the range of a,b might be [0,v-1]...
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    // now cycledetection strt from here's
    cout << cycle_detection();
}