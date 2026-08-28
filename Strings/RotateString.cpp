#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();

        if (m != n)
            return false;

        if ((s + s).find(goal) != string::npos)
            return true;

        return false;
    }
};

int main() {
    string s, goal;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter goal string: ";
    cin >> goal;

    Solution obj;

    if (obj.rotateString(s, goal))
        cout << "true";
    else
        cout << "false";

    return 0;
}