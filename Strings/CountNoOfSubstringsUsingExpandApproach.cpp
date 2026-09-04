#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int expand(string &s, int left, int right) {
        int palindromeCount = 0;
        int n = s.length();

        while(left >= 0 && right < n && s[left] == s[right]) {
            palindromeCount++;
            left--;
            right++;
        }

        return palindromeCount;
    }

    int countSubstrings(string s) {
        int n = s.length();
        int totalCount = 0;

        for(int i = 0; i < n; i++) {
            totalCount += expand(s, i, i);
            totalCount += expand(s, i, i + 1);
        }

        return totalCount;
    }
};

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

    Solution obj;

    int result = obj.countSubstrings(s);

    cout << "Total palindromic substrings: " << result << endl;

    return 0;
}