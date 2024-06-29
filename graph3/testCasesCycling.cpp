#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;
int e;

void addConnection(int x, int y, bool biDir) {
    graph[x].push_back(y);
    if (biDir) graph[y].push_back(x);
}

bool cycle_detection(int parent, int child, unordered_set<int>& s) {
    if (s.find(child) != s.end()) return false;
    s.insert(child);
    for (auto x : graph[child]) {
        if (s.find(x) == s.end()) {
            bool flag = cycle_detection(child, x, s);
            if (flag) return true;
        } else {
            if (x != parent) return true;
        }
    }
    return false;
}

bool test_cycle_detection(int vertices, int edges, vector<pair<int, int>> connections, int src) {
    v = vertices;
    e = edges;
    graph.clear();
    graph.resize(v);

    for (auto conn : connections) {
        addConnection(conn.first, conn.second, true);
    }

    int child = src;
    int parent = -1;
    unordered_set<int> s;
    return cycle_detection(parent, child, s);
}

int main() {
    // Test cases
    vector<tuple<int, int, vector<pair<int, int>>, int, bool>> test_cases = {
        {3, 3, {{1, 2}, {2, 3}, {3, 1}}, 1, true},
        {4, 3, {{1, 2}, {2, 3}, {3, 4}}, 1, false},
        {6, 7, {{1, 2}, {2, 3}, {3, 1}, {3, 4}, {4, 5}, {5, 6}, {6, 4}}, 1, true},
        {1, 0, {}, 0, false},
        {5, 4, {{1, 2}, {2, 3}, {3, 1}, {4, 5}}, 1, true},
        {10, 9, {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}, {7, 8}, {8, 9}, {9, 10}}, 1, false},
        {5, 4, {{1, 1}, {2, 3}, {3, 4}, {4, 5}}, 1, true},
        {8, 9, {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 1}, {3, 6}, {6, 7}, {7, 8}, {8, 6}}, 1, true},
        {8, 5, {{1, 2}, {2, 3}, {4, 5}, {5, 6}, {7, 8}}, 1, false},
        {9, 8, {{1, 2}, {2, 3}, {3, 1}, {4, 5}, {5, 6}, {7, 8}, {8, 9}, {9, 7}}, 1, true}
    };

    for (auto [vertices, edges, connections, src, expected] : test_cases) {
        bool result = test_cycle_detection(vertices, edges, connections, src);
        cout << "Test " << (result == expected ? "Passed" : "Failed") << endl;
    }

    return 0;
}
