#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    long long n = s.length();

    long long count = n * (n + 1) / 2;

    cout << "Total number of substrings: " << count << endl;

    return 0;
}