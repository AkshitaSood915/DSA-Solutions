#include <iostream>
#include <string>
#include <climits>
#include <cctype>
using namespace std;

int myAtoi(string s) {
    if(s.length() == 0)
        return 0;

    int i = 0;

    while(i < s.size() && s[i] == ' ') {
        i++;
    }

    // If string contains only spaces
    if(i == s.size())
        return 0;

    s = s.substr(i);

    int sign = +1;
    long long ans = 0;

    if(s[0] == '-')
        sign = -1;

    int MAX = INT_MAX;
    int MIN = INT_MIN;

    i = (s[0] == '+' || s[0] == '-') ? 1 : 0;

    while(i < s.length()) {
        if(s[i] == ' ' || !isdigit(s[i]))
            break;

        ans = ans * 10 + (s[i] - '0');

        if(sign == -1 && -ans < MIN)
            return INT_MIN;

        if(sign == 1 && ans > MAX)
            return INT_MAX;

        i++;
    }

    return (int)(sign * ans);
}

int main() {
    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    int result = myAtoi(s);

    cout << "Converted integer: " << result << endl;

    return 0;
}