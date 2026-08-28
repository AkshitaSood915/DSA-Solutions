#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    unordered_map<char, char> mp1, mp2;

    if (s.length() != t.length())
        return false;

    for (int i = 0; i < s.length(); i++) {
        char ch1 = s[i];
        char ch2 = t[i];

        if ((mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2) ||
            (mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1))
            return false;

        mp1[ch1] = ch2;
        mp2[ch2] = ch1;
    }

    return true;
}

int main() {
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (isIsomorphic(s, t))
        cout << "true";
    else
        cout << "false";

    return 0;
}