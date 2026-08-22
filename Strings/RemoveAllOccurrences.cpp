#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part) {
    while (s.length() > 0 && s.find(part) != string::npos) {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main() {
    string s, part;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter part: ";
    cin >> part;

    cout << "Result: " << removeOccurrences(s, part) << endl;

    return 0;
}