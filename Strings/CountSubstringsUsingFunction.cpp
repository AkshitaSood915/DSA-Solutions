#include <bits/stdc++.h>
using namespace std;

int countSubstrings(string s) {

    int n = s.length();

    int totalSubstrings = n * (n + 1) / 2;

    return totalSubstrings;
}

int main() {

    string s;

    cout << "Enter the string: ";
    cin >> s;

    int result = countSubstrings(s);

    cout << "Total no of Substrings are: " << result;

    return 0;
}