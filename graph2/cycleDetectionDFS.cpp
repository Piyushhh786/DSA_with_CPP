#include <bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
bool hasCycle = false;
void cycle_detection(int child, int parent, unordered_set<int> &s)
{
    if (s.find(child) != s.end())
        return;
    s.insert(child);
    for (auto x : graph[child])
    {
        if (s.find(x) != s.end() && x != parent)
        {
            hasCycle = true;
            return;
        }
        cycle_detection(x, child, s);
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    graph.resize(v);
    while (e--)
    {
        int a, b;
        cin >> a >> b; // mandatory the range of a,b might be [0,v-1]...
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    unordered_set<int> s;
    // now cycledetection strt from here's
    cycle_detection(0, -1, s);
    cout << hasCycle;
}
//? input
// 7
// 7
// 0 1
// 1 2
// 2 5
// 2 3
// 3 4
// 4 5
// 5 6