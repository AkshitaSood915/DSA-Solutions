#include <bits/stdc++.h>
using namespace std;

void printSubstrings(string s) {

    int n = s.length();

    for(int i = 0; i < n; i++) {

        for(int j = i; j < n; j++) {

            cout << s.substr(i, j - i + 1) << endl;

        }
    }
}

int main() {

    string s;

    cout << "Enter the string: ";
    cin >> s;

    printSubstrings(s);

    return 0;
}
