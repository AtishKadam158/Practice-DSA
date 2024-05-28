#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 5;
    int m = 25;
    vector<int> Profit{68, 54, 66, 32, 78};
    vector<int> Weight{12, 23, 10, 9, 8};
    priority_queue<pair<float, int>> pq;

    for (int i = 0; i < n; i++)
        pq.push({static_cast<float>(Profit[i]) / Weight[i], i});

    float w = 0; // Use float for weight
    float p = 0; // Use float for profit

    while (w < m && !pq.empty()) {
        pair<float, int> temp = pq.top();
        pq.pop();
        if (w + Weight[temp.second] <= m) {
            p += Profit[temp.second];
            w += Weight[temp.second];
        } else {
            p += (m - w) * temp.first;
            break;
        }
    }
    cout << "The Result is - " << p << endl;
    return 0;
}