#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void expand(string &s, int left, int right, int &start, int &maxLength) {
        int n = s.length();

        while(left >= 0 && right < n && s[left] == s[right]) {

            int currentLength = right - left + 1;

            if(currentLength > maxLength) {
                maxLength = currentLength;
                start = left;
            }

            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {
        int n = s.length();

        if(n == 0) {
            return "";
        }

        int start = 0;
        int maxLength = 1;

        for(int i = 0; i < n; i++) {

            expand(s, i, i, start, maxLength);

            expand(s, i, i + 1, start, maxLength);
        }

        return s.substr(start, maxLength);
    }
};

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

    Solution obj;

    string result = obj.longestPalindrome(s);

    cout << "Longest Palindromic Substring: " << result << endl;

    return 0;
}