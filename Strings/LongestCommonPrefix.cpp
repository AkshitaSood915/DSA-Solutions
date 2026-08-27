#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs.back();

    int n = min(first.size(), last.size());
    int i = 0;

    while (i < n && first[i] == last[i])
        i++;

    return first.substr(0, i);
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++)
        cin >> strs[i];

    cout << "Longest Common Prefix: "
         << longestCommonPrefix(strs);

    return 0;
}