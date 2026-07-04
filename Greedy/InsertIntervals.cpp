#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> insertInterval(vector<vector<int>>& intervals,
                                   vector<int>& newInterval) {

    vector<vector<int>> res;
    int n = intervals.size();
    int i = 0;

    while (i < n && intervals[i][1] < newInterval[0]) {
        res.push_back(intervals[i]);
        i++;
    }

    while (i < n && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }

    res.push_back(newInterval);

    while (i < n) {
        res.push_back(intervals[i]);
        i++;
    }

    return res;
}

int main() {
    int n;

    cout << "Enter number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));

    cout << "Enter intervals:\n";
    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<int> newInterval(2);

    cout << "Enter new interval: ";
    cin >> newInterval[0] >> newInterval[1];

    vector<vector<int>> ans = insertInterval(intervals, newInterval);

    cout << "Intervals after insertion:\n";
    for (auto &v : ans) {
        cout << "[" << v[0] << ", " << v[1] << "] ";
    }

    cout << endl;

    return 0;
}