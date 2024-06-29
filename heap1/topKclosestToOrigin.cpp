#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    // Using max heap
    vector<vector<int>> v;
    priority_queue<pair<int, vector<int>>> maxH; // distance, vector
    for (int i = 0; i < points.size(); i++) {
        int distance = points[i][0] * points[i][0] + points[i][1] * points[i][1];
        vector<int> temp = {points[i][0], points[i][1]};
        maxH.push({distance, temp});
        if (maxH.size() > k) maxH.pop();
    }
    while (!maxH.empty()) {
        pair<int, vector<int>> p = maxH.top();
        maxH.pop();
        v.push_back(p.second);
    }
    return v;
}

int main(){
    vector<vector<int>> x;
    x.push_back({1,2});
    x.push_back({5,1});
    int k = 1;
    x = kClosest(x , k);
    for (auto point : x) {
        cout << "(" << point[0] << ", " << point[1] << ")" << endl;
    }
    return 0;
}
