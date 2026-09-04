#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {

    int left = 0;
    int right = s.length() - 1;

    while(left < right) {

        if(s[left] != s[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

void printPalindromicSubstrings(string s) {

    int n = s.length();

    for(int i = 0; i < n; i++) {

        for(int j = i; j < n; j++) {

            string sub = s.substr(i, j - i + 1);

            if(isPalindrome(sub)) {
                cout << sub << endl;
            }
        }
    }
}

int main() {

    string s;
    cin >> s;

    printPalindromicSubstrings(s);

    return 0;
}